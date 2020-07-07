

#include <stdio.h>

int foo(int n){
	if (n == 0){
		return 1;
	}
	else{
		return n*foo(n - 1);
	}
}


int main(){

	int n;
	scanf("%d", &n);


	int ans=foo(n);

	printf("%d", ans);

	return 0;
}