
#include <stdio.h>

int tmax = 10000666;

int main(){
	
	int n;
	int ans;
	int tcnt = 0;
	scanf("%d", &n);
	
	for (int i = 1; i <= tmax; i++){

		int tmp = i;

		while (true){
			if (tmp % 1000 == 666){
				tcnt++;
				break;
			}
			if (tmp == 0) break;
			tmp /= 10;
		}
		
		if (tcnt==n){
			ans = i;
			break;
		}
	}

	printf("%d", ans);


	return 0;
}