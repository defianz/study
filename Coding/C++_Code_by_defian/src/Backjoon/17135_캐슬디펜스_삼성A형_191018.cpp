

#include <stdio.h>
#include <cstring>
#include <queue>
using namespace std;

int n, m, d;
int maps[17][16];
int msize = 0;
bool archer[16];
int cmaps[17][16];

int visited[16][16];
int dr[3] = { 0, -1, 0 };
int dc[3] = { -1, 0, 1 };
vector<pair<int, int> > mon;
int ans = 0;

void simul(){
	memcpy(cmaps, maps, sizeof(cmaps));
	int tmpszie = msize;
	// 아쳐 배치
	//pir("순열\n");
	for (int i = 1; i <= m; i++){
		if (archer[i] == true) cmaps[n + 1][i] = 2;
		//printf("%d ", archer[i]);
	}
	//printf("\n");
	// 궁수 배치 끝
	int tmp = 0;

	while (tmpszie != 0){

		mon.clear();
		// 궁수가 죽이는거
		for (int i = 1; i <= m; i++){
			if (cmaps[n + 1][i] == 2){
				memset(visited, 0, sizeof(visited));

				visited[n][i] = 1;
				if (cmaps[n][i] == 1){
					mon.push_back({ n, i });
					continue;
				}
				if (visited[n][i] == d) continue;

				queue<pair<int, int> > q;
				q.push({ n, i });

				while (!q.empty()){

					int cr = q.front().first;
					int cc = q.front().second;
					//printf("무한루프 %d %d %d \n", cr,cc,cmaps[cr][cc]);
					q.pop();

					if (cmaps[cr][cc] == 1){
						mon.push_back({ cr, cc });
						//printf("여기서 몬스터잡음\n");
						break;
					}

					for (int dir = 0; dir < 3; dir++){
						int nr = cr + dr[dir];
						int nc = cc + dc[dir];
						if (1 <= nr && nr <= n && 1 <= nc && nc <= m && visited[nr][nc] == 0 && visited[cr][cc] <= d - 1){
							visited[nr][nc] = visited[cr][cc] + 1;
							q.push({ nr, nc });
						}
					}
				}


			}
		}

		/*printf("\n");
		printf("visited출력 \n");
		for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
		printf("%d ", visited[i][j]);
		}
		printf("\n");
		}*/


		// 궁수 탐색 끝
		// 잡힌 몹 제거
		for (int i = 0; i < mon.size(); i++){
			if (cmaps[mon[i].first][mon[i].second] != 0){
				cmaps[mon[i].first][mon[i].second] = 0;
				tmp++;
				tmpszie--;
			}
		}
		//printf("잡은몬스터수 %d\n", tmp);
		//if (tmp == 14)printf("여기@@@@@@@@@@@@@@@@@@@\n");
		//궁수 공격 끝

		for (int i = 1; i <= m; i++){
			if (cmaps[n][i] == 1) tmpszie--;
		}

		//몬스터 이동
		for (int i = n - 1; i >= 1; i--){
			for (int j = 1; j <= m; j++){
				cmaps[i + 1][j] = cmaps[i][j];
			}
		}
		for (int i = 1; i <= m; i++){
			cmaps[1][i] = 0;
		}
		// 몬스터 이동 완료

		/*	printf("\n");
		printf("남은 몬스터 수 %d \n", tmpszie);
		for (int i = 1; i<=n; i++){
		for (int j = 1; j <= m; j++){
		printf("%d ", cmaps[i][j]);
		}
		printf("\n");
		}*/



	}
	ans = max(ans, tmp);
	//printf("답은 %d\n", ans);
	return;
}



void bp(int start, int cnt){
	if (cnt == 3){
		simul();
		return;
	}

	for (int i = start; i <= m; i++){
		if (archer[i] == false){
			archer[i] = true;
			bp(i + 1, cnt + 1);
			archer[i] = false;
		}
	}

}

int main(){

	scanf("%d %d %d", &n, &m, &d);

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%d", &maps[i][j]);
			if (maps[i][j] == 1) msize++;
		}
	}


	bp(1, 0);

	printf("%d", ans);

	return 0;
}