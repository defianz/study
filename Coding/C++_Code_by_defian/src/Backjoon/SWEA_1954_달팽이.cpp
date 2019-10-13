


#include <stdio.h>
#include <cstring>

int n;
int testcase = 0;
int map[11][11];

int main(){
	scanf("%d", &testcase);
	int cnt = 0;
	while (testcase--){
		scanf("%d", &n);
		memset(map, 0, sizeof(map));

		int idx = n*n;
		int x = 0, y = 0, num = 1;
		int startX = 0, startY = 0, endX = n - 1, endY = n - 1;
		int dir = 0;

		while (idx--){
			//printf("y¿Í x¿Í z´Â %d %d %d\n", y, x, num);
			map[y][x] = num;
			switch (dir){
				case 0:
					if (x != endX) x = x + 1;
					else { 
						startY++;
						dir++;
						y++;
					}
					break;
				case 1:
					if (y != endY) y = y + 1;
					else {
						endX--;
						dir++;
						x--;
					}
					break;
				case 2:
					if (x != startX) x = x - 1;
					else{
						endY--;
						dir++;
						y--;
					}
					break;
				case 3:
					if (y != startY) y = y - 1;
					else{
						startX++;
						dir = 0;
						x++;
					}
					break;
			}
			num++;
		}



		cnt++;
		printf("#%d\n", cnt);
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n; j++){
				printf("%d ",map[i][j]);
			}
			printf("\n");
		}
	
	}


	return 0;
}