#include <stdio.h>.
int n;
int ans = 0;



int main(){
	scanf("%d", &n);
	for (int i = 5; i <= n; i *= 5){
		ans += n / i;
	}

	printf("%d\n", ans);
	return 0;
}