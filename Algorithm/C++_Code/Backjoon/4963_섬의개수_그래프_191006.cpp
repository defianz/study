

#include <stdio.h>
#include <cstring>

int w, h;
int maps[51][51] = { 0, };
int visited[51][51] = { 0, };
int label = 0;
int dy[8] =  { 1, 1, 0, -1, -1, -1,  0,  1 };
int dx[8] =  { 0, 1, 1,  1,  0, -1, -1, -1 };


void dfs(int y, int x){
	visited[y][x] = label;
	for (int d = 0; d < 8; d++){
		int ny = y + dy[d];
		int nx = x + dx[d];
		if (nx<0 || nx > w - 1 || ny <0 || ny >h - 1 || visited[ny][nx] != 0 || maps[ny][nx] == 0) continue;
		dfs(ny, nx);
	}

}

int main(){
	scanf("%d %d", &w, &h);
	while (w != 0 & h != 0){
		label = 0;
		memset(maps, 0, sizeof(maps));
		memset(visited, 0, sizeof(visited));
		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				scanf("%1d", &maps[i][j]);
			}
		}

		for (int i = 0; i < h; i++){
			for (int j = 0; j < w; j++){
				if (maps[i][j] == 1 && visited[i][j] == 0){
					label++;
					dfs(i, j);
				}
			}
		}

		printf("%d\n", label);

		scanf("%d %d", &w, &h);
	}

	return 0;
}