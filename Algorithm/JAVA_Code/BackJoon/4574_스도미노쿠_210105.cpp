
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
using namespace std;
int n;
int num=0;
vector<pair<int, int>> v;
int arr[10][10];
bool domino[10][10];
int small[4][4][4][4];

int dx[2] = { 1, 0 };
int dy[2] = { 0, 1 };

bool check(int r, int c, int a){

	for (int i = 0; i < 9; i++){
		if (arr[r][i] == a) return false;
		if (arr[i][c] == a) return false;
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (small[r/3][c/3][i][j] == a) return false;
		}
	}
	return true;


}

bool bf(int index){
	if (index == 81){
		cout << "Puzzle " << num << '\n';
		for (int i = 0; i < 9; i++){
			for (int j = 0; j < 9; j++){
				cout << arr[i][j];
			}
			cout << '\n';
		}
		return true;
	}

	int r = index / 9;
	int c = index % 9;

	if (arr[r][c] != 0) return bf(index + 1);


	for (int dir = 0; dir < 2; dir++){
		int nx = r + dx[dir];
		int ny = c + dy[dir];
		if (nx < 0 || ny < 0 || nx >= 9 || ny >= 9) continue;
		if (arr[nx][ny] != 0) continue;

		for (int i = 1; i <= 9; i++){
			for (int j = 1; j <= 9; j++){
				if (i == j) continue;
				if (domino[i][j] || domino[j][i]) continue;
				if (check(r, c, i) && check(nx, ny, j)){
					domino[i][j] = domino[j][i] = true;
					arr[r][c] = i;
					arr[nx][ny] = j;
					small[r / 3][c / 3][r%3][c%3] = i;
					small[nx / 3][ny / 3][nx % 3][ny % 3] = j;

					if (bf(index + 1)) {
						return true;
					}

					domino[i][j] = domino[j][i] = false;
					arr[r][c] = 0;
					arr[nx][ny] = 0;
					small[r / 3][c / 3][r % 3][c % 3] = 0;
					small[nx / 3][ny / 3][nx % 3][ny % 3] = 0;
				}
			}
		}
	}
	return false;

}

int main(){
	
	while (true){
		cin >> n;
		if (n == 0) break;

		memset(arr, 0, sizeof(arr));
		memset(domino, false, sizeof(domino));
		memset(small, 0, sizeof(small));

		num++;
		for (int i = 0; i < n; i++){
			int a1, b1;
			string a2, b2;
			cin >> a1 >> a2 >> b1 >> b2; 
			// (int)A=65
			int r1 = a2[0] - 'A';
			int c1 = a2[1] - '1';
			int r2 = b2[0] - 'A';
			int c2 = b2[1] - '1';
			arr[r1][c1] = a1;
			arr[r2][c2] = b1;
			domino[a1][b1] = domino[b1][a1] = true;
			small[r1 / 3][c1 / 3][r1 % 3][c1 % 3] = a1;
			small[r2 / 3][c2 / 3][r2 % 3][c2 % 3] = b1;
		}

		for (int i = 1; i <= 9; i++){
			string a3;
			cin >> a3;
			// (int)A=65
			int r = a3[0] - 'A';
			int c = a3[1] - '1';
			arr[r][c] = i;
			small[r / 3][c / 3][r % 3][c % 3] = i;
		}

		bf(0);

	}


	return 0;
}