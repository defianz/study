
#include <stdio.h>


int main(){

	int n, tmp;
	int cnt[10] = { 0, };

	scanf("%d", &n);

	while (n>0){
		tmp = n % 10;
		cnt[tmp]++;
		n /= 10;
	}

	for (int i = 9; i >= 0; i--){
		while (cnt[i]--){
			printf("%d", i);
		}
	}

	return 0;
}