#include <stdio.h>
#include <cstring>
char map[3000][3000];


void foo(int n, int x, int y){
	
	if (n == 1){
		map[x][y] = '*';
		return;
	}

	int div = n / 3;
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (i == 1 && j == 1) continue;
			foo(div, x + (div*i), y + (div*j));
		}
		
	}

	return;
}

int main(){

	int n;
	scanf("%d", &n);
	


	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			map[i][j] = ' '; 
		}
	}

	foo(n, 0, 0);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			printf("%c", map[i][j]);
		}
		printf("\n");
	}


	return 0;
}