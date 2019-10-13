
 
#include <stdio.h>

int n;
int cnt = 0;
int maps[17][17] = { 0, };

void dp(int r, int c, int flag){
	if (r == n && c == n){
		cnt++;
		return;
	}
	
	if (flag == 1){
		if (c + 1 <= n){
			if(maps[r][c+1] != 1) dp(r, c + 1, 1);
		}

		if (r + 1 <= n && c + 1 <= n){
			if (maps[r + 1][c + 1] != 1 && maps[r][c + 1] != 1 && maps[r + 1][c] != 1) dp(r + 1, c + 1, 2);
		}
	}
	else if (flag == 2){
		if (c + 1 <= n){
			if ( maps[r][c + 1] != 1) dp(r, c + 1, 1);
		}

		if (r + 1 <= n && c + 1 <= n){
			if (maps[r + 1][c + 1] != 1 && maps[r][c + 1] != 1 && maps[r + 1][c] != 1) dp(r + 1, c + 1, 2);
		}

		if (r + 1 <= n) {
			if (maps[r + 1][c] != 1) dp(r + 1, c, 3);
		}
	}
	else {
		if (r + 1 <= n) {
			if (maps[r + 1][c] != 1) dp(r + 1, c, 3);
		}
		if (r + 1 <= n && c + 1 <= n){
			if (maps[r + 1][c + 1] != 1 && maps[r][c + 1] != 1 && maps[r + 1][c] != 1) dp(r + 1, c + 1, 2);
		}
	}

}


int main(){


	
	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}
	

	dp(1, 2, 1);

	printf("%d", cnt);

	return 0;
}