

#include <stdio.h>
#include <vector>
#include <queue>
#include <cstring>
#include <math.h>
using namespace std;

int n, m;
int maps[51][51];
bool visited[51][51];


vector<pair<int, int> > virus;
bool checked[11];
queue<pair<int, int> > q;

int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };
int cmap[51][51];
int ans = 2600;

void bp(int start, int cnt){
	if (cnt == m){

		memcpy(cmap, maps, sizeof(cmap));
		memset(visited, false, sizeof(visited));
		int cmax = 0;

		for (int i = 0; i < virus.size(); i++){
			//printf("%d ", checked[i]);

			if (checked[i]) {
				q.push(virus[i]);
				cmap[virus[i].first][virus[i].second] = 0;
				visited[virus[i].first][virus[i].second] = true;
			}
			else {
				cmap[virus[i].first][virus[i].second] = -2;
			}
		}
		//printf("\n");

		// 디버깅
		/*	printf("시작전\n");
		for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
		printf("%d ", cmap[i][j]);
		}
		printf("\n");
		}
		printf("시작후\n");*/

		// 디버깅 끝


		while (!q.empty()){
			//printf("무한루프 도는중");
			pair<int, int> cp = q.front();
			int cr = cp.first;
			int cc = cp.second;
			q.pop();
			for (int dir = 0; dir < 4; dir++){
				int nr = cr + dr[dir];
				int nc = cc + dc[dir];
				if (1 <= nr && nr <= n && 1 <= nc && nc <= n && (cmap[nr][nc] == -3 || cmap[nr][nc] ==-2) && visited[nr][nc] == false){
					visited[nr][nc] = true;
					cmap[nr][nc] = cmap[cr][cc] + 1;
					q.push(make_pair(nr, nc));
					
				}
			}
		}

		// 디버깅
		/*	printf("디버깅\n");
		for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
		printf("%d ", cmap[i][j]);
		}
		printf("\n");
		}
		printf("\n");*/
		// 디버깅 끝


		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (maps[i][j] == 2) continue;
				cmax = max(cmax, cmap[i][j]);
				if (cmap[i][j] == -3) return;
			}
		}

		ans = min(ans, cmax);
		//printf("ans는.. %d \n", ans);
		return;
	}

	for (int i = start; i < virus.size(); i++){
		if (checked[i] == false){
			checked[i] = true;
			bp(i + 1, cnt + 1);
			checked[i] = false;
		}
	}
}


int main(){
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
			if (maps[i][j] == 2) virus.push_back(make_pair(i, j));
			if (maps[i][j] == 1) maps[i][j] = -1;
			if (maps[i][j] == 0) maps[i][j] = -3;
		}
	}


	bp(0, 0);

	if (ans == 2600) printf("-1");
	else{
		printf("%d", ans);
	}

	return 0;
}