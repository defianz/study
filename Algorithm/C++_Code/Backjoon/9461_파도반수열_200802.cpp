

#include <stdio.h>

int main(){
	int n,testcase;
	long p[101] = { 0, };
	scanf("%d", &testcase);

	while (testcase--){
		scanf("%d", &n);
		p[1] = 1;
		p[2] = 1;
		p[3] = 1;
		p[4] = 2;
		p[5] = 2;

		for (int i = 6; i <= n; i++){
			p[i] = p[i - 1] + p[i - 5];
		}

		printf("%ld\n", p[n]);
	}

	return 0;
}