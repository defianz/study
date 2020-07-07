


#include <stdio.h>


int main(){
	
	int testcase,n;
	int d[12] = { 0, };
	d[0] = 1;
	d[1] = 1;
	d[2] = 2;
	scanf("%d", &testcase);


	while (testcase--){
		scanf("%d", &n);
		for (int i = 3; i <= n; i++){
			d[i] = d[i - 1] + d[i - 2] + d[i - 3];
		}
		printf("%d\n", d[n]);
	}


	return 0;
}