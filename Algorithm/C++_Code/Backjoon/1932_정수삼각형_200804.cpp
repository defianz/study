

#include <stdio.h>
int n;
int arr[501][501] = { 0, };
int bp[501][501]={ 0, };

int max(int a, int b){
	if (a >= b){
		return a;
	}
	else {
		return b;
	}
}

int main(){

	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= i; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 1; i <= n; i++){
		bp[n][i] = arr[n][i];
	}

	for (int i = 1; i <= n - 1; i++){
		for (int j = 1; j <= n - i; j++){
			bp[n - i][j] = max(bp[n-i+1][j], bp[n-i+1][j + 1]) + arr[n - i][j];
		}
	}

	printf("%d", bp[1][1]);

	return 0;
}