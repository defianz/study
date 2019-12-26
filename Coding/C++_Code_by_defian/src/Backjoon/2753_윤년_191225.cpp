


#include <stdio.h>

int main(){

	int a,ans;
	ans = 0;
	scanf("%d", &a);
	if (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
		ans = 1;
	}
	printf("%d", ans);

	return 0;
}