

#include <stdio.h>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;


int n, m;
int maps[9][9];
int cmap[9][9];
bool visited[9][9] = { false, };
int ans = 0;
queue<pair<int, int>> q;

int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };


void bfs(){
	memset(cmap, 0, sizeof(cmap));
	memcpy(cmap, maps, sizeof(cmap));

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (cmap[i][j] == 2){
				q.push(make_pair(i, j));
				while (!q.empty()){
					pair<int, int> p = q.front();
					q.pop();
					for (int dir = 0; dir < 4; dir++){
						int nr = p.first + dr[dir];
						int nc = p.second + dc[dir];
						if (1<=nr && n>= nr && 1<=nc && m>=nc && cmap[nr][nc] == 0){
							cmap[nr][nc] = 2;
							q.push(make_pair(nr, nc));
						}
					}
				}
			}
		}
	}
	//printf("여기까지오나");
	int hap = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (cmap[i][j] == 0) hap++;
		}
	}

	//printf("여기까지오나");
	/*for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			printf("%d ", cmap[i][j]);
		}
		printf("\n");
	}
	printf("구분이 가야지 \n");
	printf("값은 %d\n", hap);*/
	ans = max(hap, ans);
	return;
}


void dfs(int cnt){
	
	if (cnt == 3){
		
		bfs();
		return;
	}
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (maps[i][j] == 0 && visited[i][j] == false){
				visited[i][j] = true;
				maps[i][j] = 1;
				dfs(cnt + 1);
				maps[i][j] = 0;
				visited[i][j] = false;
			}
		}
	}

}


int main(){
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%d", &maps[i][j]);
		}
	}
	// 입력완료

	dfs(0);


	printf("%d", ans);


	return 0;
}