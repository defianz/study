

#include <stdio.h>


int main(){
	int testcase;
	scanf("%d", &testcase);

	while (testcase--){
		int ans;
		int n, m;
		scanf("%d %d", &n, &m);


		if (m < 4 || n <12) ans = -1;
		else ans = 11 * m + 4;

		printf("%d\n", ans);
	}

	return 0;
}