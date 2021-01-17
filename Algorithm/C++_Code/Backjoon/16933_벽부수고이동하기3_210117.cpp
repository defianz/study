

#include <stdio.h>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;


int n, m, k;
int map[1001][1001];
int cnt[1001][1001][11];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(){

	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%1d", &map[i][j]);
		}
	}

	queue<tuple<int, int, int, bool, bool>> q;
	q.push(make_tuple(1, 1, 0, true, false));
	cnt[1][1][0] = 1;

	while (!q.empty()){
		int x, y, z;
		bool nat, wait;
		tie(x, y, z, nat,wait) = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++){
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 1 || nx >n || ny <1 || ny >m) continue;

			if (cnt[nx][ny][z] != 0) continue;
			
			if (map[nx][ny] == 1 && z < k && nat == true){
				if (cnt[nx][ny][z+1] != 0) continue;

				if (wait == false){
					cnt[nx][ny][z + 1] = cnt[x][y][z] + 1;
				}
				else {
					cnt[nx][ny][z + 1] = cnt[x][y][z] + 2;
				}

				q.push(make_tuple(nx, ny, z + 1, false, false));
			}

			if (map[nx][ny] == 1 && z < k && nat == false){
				if (cnt[nx][ny][z + 1] != 0) continue;
				q.push(make_tuple(x, y, z, true, true));
			}

			if (map[nx][ny] == 0){
				cnt[nx][ny][z] = cnt[x][y][z] + 1;
				q.push(make_tuple(nx, ny, z, !nat, wait));
			}


		}

	}

	int ans = 99999999;
	for (int i = 0; i <= k; i++){
		if (cnt[n][m][i] != 0) ans = min(ans, cnt[n][m][i]);
	}
	if (ans == 99999999) ans = -1;
	printf("%d", ans);

	return 0;
}