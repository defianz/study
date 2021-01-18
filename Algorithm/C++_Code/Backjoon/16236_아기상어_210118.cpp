

#include <iostream>
#include <vector>
#include <tuple>
#include <queue>
#include <cstring>
using namespace std;

int n;
int map[20][20];
int check[20][20];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

vector<tuple<int,int,int> > fish;
int sr, sc, ssize, scnt;
int d[400];
int ans = 0;


int main(){

	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> map[i][j];
			if (map[i][j] == 9) {
				sr = i;
				sc = j;
			}
		}
	}

	int ssize = 2;
	int scnt = 0;

	bool flag = true;
	while (flag){
		flag = false;
		vector<tuple<int, int, int> > targetfish;

		// 작은 물고기 고르기
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (map[i][j] != 9 && map[i][j] != 0){
					if (map[i][j] < ssize) targetfish.push_back(make_tuple(i, j, map[i][j]));
				}
			}
		}
		if (targetfish.size() == 0) break;

		// 모든 거리 구하기
		memset(check, 0, sizeof(check));
		queue<pair<int, int> > q;
		q.push(make_pair(sr, sc));
		check[sr][sc] = 1;
		while (!q.empty()){
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for (int dir = 0; dir < 4; dir++){
				int nx = x + dx[dir];
				int ny = y + dy[dir];
				if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
				if (check[nx][ny] != 0) continue;
				if (map[nx][ny] > ssize) continue;
				check[nx][ny] = check[x][y] + 1;
				q.push(make_pair(nx, ny));
			}
		}


		// 작은물고기 비교
		int tr, tc, tsize;
		tie(tr, tc, tsize) = targetfish[0];
		if (targetfish.size() != 1){
			for (int i = 1; i < targetfish.size(); i++){
				int fr, fc, fsize;
				tie(fr, fc, fsize) = targetfish[i];
				if (check[fr][fc] == 0) continue;
				if (check[tr][tc] == 0) {
					tr = fr;
					tc = fc;
					tsize = fsize;
					continue;
				}
				if (check[fr][fc] < check[tr][tc]){
					tr = fr;
					tc = fc;
					tsize = fsize;
				}
				else if (check[fr][fc] == check[tr][fc]){
					if (fr < tr){
						tr = fr;
						tc = fc;
					}
					else if (fr == tr){
						if (fc < tc){
							tr = fr;
							tc = fc;
						}
					}
				}
			}
		}
		//cout << "잡힌물고기 : r: " << tr << " c : " << tc <<  "거리 : " << check[tr][tc]-1 << '\n';

		if (check[tr][tc] == 0) break;

		// 상어 움직임
		map[tr][tc] = 9;
		map[sr][sc] = 0;
		sr = tr;
		sc = tc;
		scnt++;
		ans += check[tr][tc] - 1;
		if (scnt == ssize){
			ssize++;
			scnt = 0;
		}
	

		// 다시 하는 조건
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				if (map[i][j] != 9 && map[i][j] != 0 && map[i][j] < ssize){
					flag = true;
					break;
				}
			}
		}
	}

	cout << ans << '\n';

	return 0;
}