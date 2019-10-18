


#include <stdio.h>
#include <queue>
#include <cstring>
using namespace std;

struct fish{
	int r;
	int c;
	int size;
};


int n, m;
int dr[4] = { -1, 0, 1, 0 }; 
int dc[4] = { 0, 1, 0, -1 };
int maps[21][21];
int dist[21][21];
fish sh;
queue<pair<int,int> > q;

int main(){

	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
			if (maps[i][j] == 9) sh = { i, j, 2 };
		}
	}
	
	// 입력 완료

	int ans = 0;
	int cnt = 0;
	int tmp = 0;

	while (true){
		tmp++;
		// 엄마 상어 부를지 확인 flag
		bool flag = false;
		// 탐색 시작
			
			// 초기화
		memset(dist, -1, sizeof(dist));
		fish minfish = { 0, 0, sh.size };
		dist[0][0] = 4000;
		//printf("루프빠짐2\n");

		dist[sh.r][sh.c] = 0;
		q.push(make_pair(sh.r,sh.c));
		while (!q.empty()){
			pair<int, int> sp = q.front();
			q.pop();
			int sr = sp.first;
			int sc = sp.second;
			for (int dir = 0; dir < 4; dir++){
				//printf("루프빠짐1\n");
				int nr = sr + dr[dir];
				int nc = sc + dc[dir];
				if (1 <= nr && nr <= n && 1 <= nc && nc <= n && dist[nr][nc] == -1 && maps[nr][nc] <= sh.size ){
					dist[nr][nc] = dist[sr][sc] +1;
					q.push(make_pair(nr, nc));
					if (maps[nr][nc] == 0 || maps[nr][nc] == sh.size) continue;
					else{
						//printf("%d", dist[minfish.r][minfish.c]);
							if (dist[nr][nc] < dist[minfish.r][minfish.c]){
								flag = true;
								minfish.r = nr;
								minfish.c = nc;
								minfish.size = maps[nr][nc];
							}
							else if (dist[nr][nc] == dist[minfish.r][minfish.c]){
								if (minfish.r < nr){
									continue;
								}
								else if (minfish.r == nr){
									if (minfish.c < nc){
										continue;
									}
									else {
										flag = true;
										minfish.r = nr;
										minfish.c = nc;
										minfish.size = maps[nr][nc];
									}
								}
								else {
									flag = true;
									minfish.r = nr;
									minfish.c = nc;
									minfish.size = maps[nr][nc];
								}
							}
							else{
								continue;
							}

					}
				}
			}
		}

		// 탐색 종료
		if (flag == false) break;
		cnt++;
		if (cnt == sh.size) {
			sh.size++;
			cnt = 0;
		}
		ans += dist[minfish.r][minfish.c];
		maps[minfish.r][minfish.c] = 10;
		maps[sh.r][sh.c] = 0;
		sh.r = minfish.r;
		sh.c = minfish.c;
		
		/*printf("%d 번쨰 \n",tmp );
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				printf("%d ", maps[i][j]);
			}
			printf("\n");
		}*/

	}


	// 출력
	printf("%d", ans);

	return 0;
}