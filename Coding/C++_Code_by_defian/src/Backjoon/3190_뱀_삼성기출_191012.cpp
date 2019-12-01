


#include <iostream>
#include <queue>
using namespace std;



int n, k, l;
int maps[101][101];
int bang[10001];
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };
int ans = 0;
queue<pair<int, int>> q;

int main(){

	cin >> n >> k;
	for (int i = 0; i < k; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		maps[tmp1][tmp2] = 7;
	}

	cin >> l;
	for (int i = 0; i < l; i++){
		int tmp1; char tmp2;
		cin >> tmp1 >> tmp2;
		if (tmp2 == 'D'){
			bang[tmp1] = 1;
		}
		else {
			bang[tmp1] = 3;
		}
	}
	// µð¹ö±ë 
	/*cout << "µð¹ö±ë bang" << "\n";
	for (int i = 0; i < 100; i++){
		cout << bang[i] << " ";
	}
	cout << "\n";*/

	int r = 1;
	int c = 1;
	int dir = 1;
	maps[1][1] = 1;
	q.push(make_pair(r, c));

	while (true){
		ans++;
		int nr = r + dr[dir];
		int nc = c + dc[dir];
		if (nr <1 || nr >n || nc <1 || nc>n || maps[nr][nc] == 1){
			break;
		}
		q.push(make_pair(nr, nc));

		if (maps[nr][nc] != 7){
			pair<int, int> tmp3 = q.front();
			maps[tmp3.first][tmp3.second] = 0;
			q.pop();
		}
		maps[nr][nc] = 1;
		r = nr;
		c = nc;

		dir = (dir + bang[ans])%4;
	}

	cout << ans << "\n";

	return 0;
}