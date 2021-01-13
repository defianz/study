
#include <stdio.h>
#include <queue>
#include <vector>
#include <set>
#include <cstring>
using namespace std;

int n, m;
int map[1001][1001];
int ans[1001][1001];
int tmp[1001][1001];
int cnt[600001];
bool visited[1001][1001];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
vector<pair<int, int> > v;

int main(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%1d", &map[i][j]);
			if (map[i][j] == 1) v.push_back(make_pair(i, j));
		}
	}
	
	memcpy(tmp, map, sizeof(tmp));

	int index = 2;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (tmp[i][j] == 0 && visited[i][j] == false){
				visited[i][j] = true;
				tmp[i][j] = index;
				queue<pair<int, int> > q;
				q.push(make_pair(i, j));

				while (!q.empty()){
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					cnt[index] += 1;
					for (int dir = 0; dir < 4; dir++){
						int nx = x + dx[dir];
						int ny = y + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (visited[nx][ny]) continue;
						if (tmp[nx][ny] == 0){
							tmp[nx][ny] = index;
							visited[nx][ny] = true;
							q.push(make_pair(nx, ny));
						}
					}
				}
				index++;
			}
		}
	}

	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < m; j++){
	//		printf("%d", tmp[i][j]);
	//	}
	//	printf("\n");
	//}


	for (int i = 0; i < v.size(); i++){
		int r = v[i].first;
		int c = v[i].second;
		set<int> s;
		for (int dir = 0; dir < 4; dir++){
			int nr = r + dx[dir];
			int nc = c + dy[dir];
			if (nr < 0 || nr >= n || nc < 0 || nc >= m) continue;
			if (tmp[nr][nc] != 1){
				s.insert(tmp[nr][nc]);
			}	
		}
		for (int z : s){
			ans[r][c] += cnt[z];
		}
		ans[r][c] += 1;
	}



	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			printf("%d", ans[i][j] % 10);
		}
		printf("\n");
	}



	return 0;
}