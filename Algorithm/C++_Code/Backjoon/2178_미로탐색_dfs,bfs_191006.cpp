


#include <stdio.h>
#include <queue>
using namespace std;


int n,m;
int maps[101][101];
queue<pair<int, int>> q;
int cnt[101][101] = { 0, };
int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };

int main(){

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%1d", &maps[i][j]);
		}
	}

	cnt[0][0] = 1;
	q.push(make_pair(0, 0));

	while (!q.empty()){
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();
		for (int d = 0; d < 4; d++){
			int ny = cy + dy[d];
			int nx = cx + dx[d];
			if (nx<0 || nx > m - 1 || ny<0 || ny >n - 1 || cnt[ny][nx] != 0 || maps[ny][nx] == 0) continue;
			cnt[ny][nx] = cnt[cy][cx]+1;
			q.push(make_pair(ny, nx));
		}
	}

	//for (int i = 0; i < n; i++){
	//	for (int j = 0; j < m; j++){
	//		printf("%d", cnt[i][j]);
	//	}
	//	printf("\n");
	//}


	printf("%d", cnt[n - 1][m - 1]);

	return 0;
}