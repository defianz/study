
#include <iostream>
#include <string>
#include <queue>
#include <cstring>
#include <tuple>
using namespace std;

int w, h;
char map[101][101];
int d[101][101];
int sx, sy, ex, ey;
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(){
	cin >> w >> h;
	bool flag = false;
	for (int i = 0; i < h; i++){
		string tmp;
		
		cin >> tmp;
		for (int j = 0; j < w; j++){
		
			map[i][j] = tmp[j];
			if (map[i][j] == 'C'){
				if (flag == true) {
					ex = i;
					ey = j;
				}
				else {
					sx = i;
					sy = j;
					flag = true;
				}
			}
		}
	}


	memset(d, -1, sizeof(d));
	d[sx][sy] = 0;
	queue<pair<int, int> > q;
	q.push(make_pair(sx, sy));

	while (!q.empty()){
		int x, y;
		tie(x, y) = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++){
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			while (nx >= 0 && ny >= 0 && nx < h && ny < w){
				if (map[nx][ny] == '*') break;
				if (d[nx][ny] == -1){
					d[nx][ny] = d[x][y] + 1;
					q.push(make_pair(nx, ny));
				}
				nx += dx[dir];
				ny += dy[dir];
			}
		}
	}
	cout << d[ex][ey] - 1 << '\n';


	return 0;
}