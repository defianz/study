

#include <iostream>
#include <string>
#include <queue>
#include <cstring>
using namespace std;

int n;
char map[101][101];
int check[101][101];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int gindex = 1;

void bfs(int r, int c){
	queue<pair<int, int> > q;
	q.push(make_pair(r, c));
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for (int dir = 0; dir < 4; dir++){
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
			if (check[nx][ny] == 0 && map[nx][ny] == map[x][y]){
				check[nx][ny] = gindex;
				q.push(make_pair(nx, ny));
			}
		}
	}
}

int main(){
	cin >> n;

	for (int i = 0; i < n; i++){
		string tmp;
		cin >> tmp;
		for (int j = 0; j < n; j++){
			map[i][j] = tmp[j];
		}
	}


	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (check[i][j] != 0) continue;
			check[i][j] = gindex;
			bfs(i, j);
			gindex += 1;
		}
	}
	int a = gindex - 1;

	memset(check, 0, sizeof(check));
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (map[i][j] == 'R') map[i][j] = 'G';
		}
	}

	gindex = 1;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (check[i][j] != 0) continue;
			check[i][j] = gindex;
			bfs(i, j);
			gindex += 1;
		}
	}
	int b = gindex - 1;

	cout << a << " " << b << '\n';


	return 0;
}