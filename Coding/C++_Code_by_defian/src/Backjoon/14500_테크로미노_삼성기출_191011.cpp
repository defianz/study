
#include <stdio.h>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m;
int maps[501][501];
int ans = 0; 
int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };
bool visited[501][501] = { false, };

void dfs(int r, int c, int hap,int cnt){
	if (cnt == 4){
		ans = max(ans, hap);
		return;
	}

	for (int dir = 0; dir < 4; dir++){
		int nr = r + dy[dir];
		int nc = c + dx[dir];
		if (1 <= nr && nr <= n && 1 <= nc && nc <= m && !visited[nr][nc]){
			visited[nr][nc] = true;
			dfs(nr, nc, hap + maps[nr][nc], cnt + 1);
			visited[nr][nc] = false;
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
	// 입력 완료

	// 디버깅 
	/*printf("입력\n");
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			printf("%d ", maps[i][j]);
		}
		printf("\n");
	}*/

	// dfs & 백트래킹
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			memset(visited, 0, sizeof(visited));
			visited[i][j] = true;
			dfs(i, j,maps[i][j],1);
			visited[i][j] = false;
		}
	}

	// dfs & 백트래킹 완료

	// ㅗ 모양 예외로 구현

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (i + 1 <= n && j + 2 <= m) ans = max(ans, maps[i][j] + maps[i][j + 1] + maps[i][j + 2] + maps[i + 1][j + 1]);
			if (1 <= i - 1 && j + 2 <= m)  ans = max(ans, maps[i][j] + maps[i][j + 1] + maps[i][j + 2] + maps[i -1][j + 1]);
			if (i + 2 <= n && j + 1 <= m)  ans = max(ans, maps[i][j] + maps[i+1][j] + maps[i+2][j] + maps[i+1][j + 1]);
			if (i + 2 <= n && 1 <= j - 1)  ans = max(ans, maps[i][j] + maps[i + 1][j] + maps[i + 2][j] + maps[i + 1][j - 1]);
		}
	}

	
	// 답 출력

	printf("%d", ans);

	return 0;
}


