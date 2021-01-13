
#include <stdio.h>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

int n, m;
int map[1001][1001];
int dist[1001][1001][2];
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 }; 


int main(){

	scanf("%d %d", &n, &m);

	int ans = -1;

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%1d", &map[i][j]);
		}
	}

	queue<tuple<int,int,int> > q;
	q.push(make_tuple(1, 1, 0));
	dist[1][1][0] = 1;

	while (!q.empty()){
		int r, c, z;
		tie(r, c, z) = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++){
			int nr = r + dr[dir];
			int nc = c + dc[dir];

			if (nr <= 0 || nr > n || nc <= 0 || nc > m) continue;

			if (map[nr][nc] == 0 && dist[nr][nc][z] == 0){
				dist[nr][nc][z] = dist[r][c][z] + 1;
				q.push(make_tuple(nr, nc, z));
			}

			if (map[nr][nc] == 1 && z == 0 && dist[nr][nc][z + 1] == 0){
				dist[nr][nc][z + 1] = dist[r][c][z] + 1;
				q.push(make_tuple(nr, nc, z+1));
			}

		}
	}


	if (dist[n][m][0] != 0 && dist[n][m][1] != 0) ans = min(dist[n][m][0], dist[n][m][1]);
	else if (dist[n][m][0] != 0 && dist[n][m][1] == 0) ans = dist[n][m][0];
	else if (dist[n][m][0] == 0 && dist[n][m][1] != 0) ans = dist[n][m][1];

	printf("%d\n", ans);
	return 0;
}