


#include <stdio.h>
int jong[6] = { 5, 5, 5, 5, 5 };
int maps[11][11];
int ans = -1;

void bp(int r, int c){

}

int main(){

	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 10; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 10; j++){
			if (maps[i][j] == 1){
				bp(i, j);
			}
		}
	}



	// ´ä Ãâ·Â
	printf("%d", ans);
	return 0;
}