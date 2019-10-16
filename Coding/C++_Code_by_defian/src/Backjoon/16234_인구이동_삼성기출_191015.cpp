


#include <stdio.h>
#include <queue>
using namespace std;

int n, l, r;
int maps[51][51];
int visited[51][51];
queue<pair<int, int>> q;
int dc[4] = { 0, 1, 0, -1 };
int dr[4] = { 1, 0, -1, 0 };
pair<int, int> labcnt[2501];

int main(){
	scanf("%d %d %d", &n, &l, &r);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	bool flag = true;
	int cnt = 0;
	int label = 0;
	while (flag){
		//memset(visited, false, sizeof(visited));
		flag = false;
		memset(visited, 0, sizeof(visit ed));
		//memset(labcnt, 0, sizeof(labcnt));
	
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (visited[i][j] <= label ) continue;
				visited[i][j] = label++;
				labcnt[label].first += maps[i][j];
				labcnt[label].second++;
				q.push(make_pair(i, j));
				while (!q.empty()){
					pair<int, int> np = q.front();
					int cr = np.first;
					int cc = np.second;
					q.pop();
					for (int dir = 0; dir < 4; dir++){
						int nr = cr+ dr[dir];
						int nc = cc + dc[dir];
						int dif = abs(maps[nr][nc] - maps[cr][cc]);
						if (1 <= nr && nr <= n && 1 <= nc && nc <= n && l <= dif && dif <= r && visited[nr][nc]){
							visited[nr][nc] = label;
							labcnt[label].first += maps[nr][nc];
							labcnt[label].second++;
							flag = true;
							q.push(make_pair(nr, nc));
						}
					}
				}
			}
		}
		// Å½»ö ¿Ï·á 

		if (flag == true){
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					if (labcnt[visited[i][j]].second != 1){
						maps[i][j] = labcnt[visited[i][j]].first / labcnt[visited[i][j]].second;
					}

				}
			}
			cnt++;
		}
	}


	printf("%d", cnt);
	return 0;
}