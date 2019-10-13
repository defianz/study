


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int n, cnt = 0;
int maps[26][26];
int visited[26][26] = { 0, };
vector<int> counts;
queue<pair<int,int>> q;
int dy[4] = { 1, -1, 0, 0 };
int dx[4] = { 0, 0, 1, -1 };

int main(){

	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%1d", &maps[i][j]); 
		}
	}
	


	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (maps[i][j] == 1 && visited[i][j] == 0){
				cnt = cnt + 1;

				q.push(make_pair(i, j));
				visited[i][j] = cnt;
				int tmp = 1;

				while (!q.empty()){
					int cx = q.front().first;
					int cy = q.front().second;
					q.pop();
					for (int d = 0; d < 4; d++){
						int ny = cy + dy[d];
						int nx = cx + dx[d];

						if (nx < 0 || nx>n - 1 || ny<0 || ny>n - 1 || visited[nx][ny] != 0 || maps[nx][ny] == 0) continue;
						q.push(make_pair(nx, ny));
						visited[nx][ny] = cnt;
						tmp++;
					}
				}
			counts.push_back(tmp);
			}
			
		}
	}
	sort(counts.begin(), counts.end());

	//printf("visited¿‘¥œ¥Ÿ\n");
	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < n; j++){
	//		printf("%d", visited[i][j]); 
	//	}
	//	printf("\n");
	//}


	printf("%d\n", counts.size());
	for (auto a : counts){
		printf("%d\n", a);
	}

	return 0;
}