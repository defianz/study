



#include <stdio.h>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
struct block{
	int r;
	int c;
	int res;
};



int n,ans;
int maps[21][21];
int cmaps[21][21];
bool combi[21][21];
int d[5];
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

void bp(int cnt){
	if (cnt == 5){
		//printf("시작\n");
		memcpy(cmaps, maps, sizeof(cmaps));

		for (int i = 0; i < 5; i++){

			memset(combi, false, sizeof(combi));
			int dir = d[i];
			if (dir == 0){
				for (int j = 1; j <= n; j++){
					block tmp = { 1, j, cmaps[1][j] };
					for (int i = 2; i <= n; i++){
						if (cmaps[i][j] != 0){
							if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false){
								combi[tmp.r][tmp.c] = true;
								cmaps[tmp.r][tmp.c] += cmaps[i][j];
								cmaps[i][j] = 0;
								tmp.res += cmaps[tmp.r][tmp.c];
							}
							else if (tmp.res == 0){
								cmaps[tmp.r][tmp.c] = cmaps[i][j];
								tmp.res = cmaps[i][j];
								cmaps[i][j] = 0;
							}
							else {
								cmaps[tmp.r + 1][tmp.c] = cmaps[i][j];
								tmp = { tmp.r + 1, tmp.c, cmaps[i][j] };
								if(tmp.r != i) cmaps[i][j] = 0;
							}
						}
						else {
							continue;
						}
					}
				}
			}
			else if (dir == 1){
				for (int i = 1; i <= n; i++){
					block tmp = { i, n, cmaps[i][n] };
					for (int j = n-1; j >= 1; j--){
						if (cmaps[i][j] != 0){
							if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false){
								combi[tmp.r][tmp.c] = true;
								cmaps[tmp.r][tmp.c] += cmaps[i][j];
								cmaps[i][j] = 0;
								tmp.res += cmaps[tmp.r][tmp.c];
							}
							else if(tmp.res==0){
								cmaps[tmp.r][tmp.c] = cmaps[i][j];
								tmp.res = cmaps[i][j];
								cmaps[i][j] = 0;
							}
							else {
								cmaps[tmp.r][tmp.c- 1] = cmaps[i][j];
								tmp = { tmp.r, tmp.c-1, cmaps[i][j] };
								if (tmp.c != j) cmaps[i][j] = 0;
							}
						}
						else {
							continue;
						}
					}
				}
			
			}
			else if (dir == 2){
				for (int j = 1; j <= n; j++){
					block tmp = { n, j, cmaps[n][j] };
					for (int i = n-1; i >= 1; i--){
						if (cmaps[i][j] != 0){
							if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false){
								combi[tmp.r][tmp.c] = true;
								cmaps[tmp.r][tmp.c] += cmaps[i][j];
								cmaps[i][j] = 0;
								tmp.res += cmaps[tmp.r][tmp.c];
							}
							else if (tmp.res == 0){
								cmaps[tmp.r][tmp.c] = cmaps[i][j];
								tmp.res = cmaps[i][j];
								cmaps[i][j] = 0;
							}
							else {
								cmaps[tmp.r -1][tmp.c] = cmaps[i][j];
								tmp = { tmp.r - 1, tmp.c, cmaps[i][j] };
								if (tmp.r != i)  cmaps[i][j] = 0;
							}
						}
						else {
							continue;
						}
					}
				}

			}
			else {
				for (int i = 1; i <= n; i++){
					block tmp = { i, 1, cmaps[i][1] };
					for (int j = 2; j <= n;  j++){
						if (cmaps[i][j] != 0){
							if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false){
								combi[tmp.r][tmp.c] = true;
								cmaps[tmp.r][tmp.c] += cmaps[i][j];
								cmaps[i][j] = 0;
								tmp.res += cmaps[tmp.r][tmp.c];
							}
							else if (tmp.res == 0){
								cmaps[tmp.r][tmp.c] = cmaps[i][j];
								tmp.res = cmaps[i][j];
								cmaps[i][j] = 0;
							}
							else {
								cmaps[tmp.r][tmp.c +1] = cmaps[i][j];
								tmp = { tmp.r, tmp.c + 1, cmaps[i][j] };
								if (tmp.c != j) cmaps[i][j] = 0;
							}
						}
						else {
							continue;
						}
					}
				}
			}
		

						
			/*printf(" 디버깅중 %d \n", d[i]);
			for (int i = 1; i <= n; i++){
				for (int j = 1; j <= n; j++){
					printf("%d ", cmaps[i][j]);
				}
				printf("\n");
			}
			printf("\n");*/
		}
		
		int tmp = 0;
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				tmp = max(tmp, cmaps[i][j]);
			}
		}
		ans = max(ans, tmp);
		return;
	}
	//
	for (int i = 0; i < 4; i++){
		d[cnt] = i;
		bp(cnt + 1);
	}
}


int main(){

	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}


	bp(0);


	printf("%d", ans);

	return 0;
}