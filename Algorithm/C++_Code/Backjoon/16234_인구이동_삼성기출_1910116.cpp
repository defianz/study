



#include <stdio.h>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;

int n, l, r;
int maps[51][51];
int ans = 0;
queue<pair<int, int>> q;
vector<pair<int, int>> cal(2501);

int dr[4] = { 0, -1, 0, 1 };
int dc[4] = { 1, 0, -1, 0 };

int main(){

	scanf("%d %d %d", &n, &l, &r);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	bool anflag = true;
	bool visited[51][51] = { false, };
	int label[51][51] = { 0, };


	while (anflag){
		anflag = false;

		memset(visited, false, sizeof(visited));
		vector<pair<int, int>> cal(2501);


		int cnt = 1;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (visited[i][j] == true) continue;
				visited[i][j] = true;
				label[i][j] = cnt;
				cal[cnt].first++;
				cal[cnt].second += maps[i][j];
				q.push(make_pair(i, j));
				while (!q.empty()){
					pair<int, int> cp = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++){
						int nr = cp.first + dr[dir];
						int nc = cp.second + dc[dir];
						int dif = abs(maps[nr][nc] - maps[cp.first][cp.second]);
						if (1 <= nr && nr <= n && 1 <= nc && nc <= n && !visited[nr][nc] && l <= dif && dif <= r){
							visited[nr][nc] = true;
							label[nr][nc] = cnt;
							cal[cnt].first++;
							cal[cnt].second += maps[nr][nc];
							q.push(make_pair(nr, nc));
							anflag = true;
						}
					}
				}
				cnt++;
			}
		}

	/*	for (int i = 1; i < cnt; i++){
			int tmp = cal[i].second / cal[i].first;
			for (int r = 1; r <= n; r++){
				for (int c = 1; c <= n; c++){
					if (label[r][c] == i){
						maps[r][c] = tmp;
					}
				}
			}
		}*/

		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				maps[i][j] = cal[label[i][j]].second / cal[label[i][j]].first;
			}
		}



		//printf("%d\n", anflag);
		if(anflag)ans++;
	}

	printf("%d", ans);

	return 0;
}