

#include <stdio.h>


int main(){

	int n;
	scanf("%d", &n);
	int ans = 0;
	for (int i = 1; i <= n; i++){
		int tmp = i;
		int res = tmp;
		
		while (true){
			res  += tmp % 10;
			tmp = tmp / 10;
			if (tmp == 0) break;
		}
		if (res == n){
			ans = i;
			break;
		}
	}
	printf("%d", ans);

	return 0;
}