
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;

int r, c;
int map[51][51][300];
vector<pair<int, int> > water;
int gr, gc;
int ar, ac;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int ans;

int main(){
	cin >> r >> c;

	// X : 1 , D: 2  S : 3 , * : 4
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			char tmp;
			cin >> tmp;
			if (tmp == 'X') {
				for (int k = 0; k< 300; k++){
					map[i][j][k] = 1;
				}
			}
			else if (tmp == 'D'){
				for (int k = 0; k< 300; k++ ){
					map[i][j][k] = 2;
				}
				ar = i;
				ac = j;
			}
			else if (tmp == 'S') {
				map[i][j][0] = 3;
				gr = i;
				gc = j;
			}
			else if (tmp == '*') {
				map[i][j][0] = 4;
				water.push_back(make_pair(i, j));
			}
			else map[i][j][0] = 0;
		}
	}

	queue<tuple<int, int, int, int> > q;
	for (int i = 0; i < water.size(); i++){
		q.push(make_tuple(water[i].first,water[i].second,0, 1));
	}
	q.push(make_tuple(gr, gc, 0,2));

	while (!q.empty()){
		int x, y, z, flag;
		tie(x, y, z, flag) = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++){
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 1 || nx >r || ny < 1 || ny >c) continue;

			if (flag == 1){
				if (map[nx][ny][z] == 0){
					if (map[nx][ny][z + 1] == 0){
						map[nx][ny][z + 1] = map[x][y][z];
						map[nx][ny][z] = map[x][y][z];
						q.push(make_tuple(nx, ny, z + 1, flag));
					}
				}
			}

			if (flag == 2){
				if (map[nx][ny][z] == 2){
					cout << z + 1 << '\n';
					return 0;
				}
				if (map[nx][ny][z] == 0){
					if (map[nx][ny][z + 1] == 0){
						map[nx][ny][z + 1] = map[x][y][z];
						map[nx][ny][z] = map[x][y][z];
						q.push(make_tuple(nx, ny, z + 1, flag));
					}
				}
			}
		}
	}

	cout << "KAKTUS" << '\n';

	return 0;
}