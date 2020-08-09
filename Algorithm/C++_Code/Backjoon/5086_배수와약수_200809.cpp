

#include <stdio.h>

int main(){

	int a, b;
	int ans;

	while (true){
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) break;

		if (b>a && (b % a == 0)){
			ans = 1;
		}
		else if (a > b && (a%b == 0)){
			ans = 2;
		}
		else {
			ans = 3;
		}




		if (ans == 1){
			printf("factor\n");
		}
		else if (ans == 2){
			printf("multiple\n");
		}
		else {
			printf("neither\n"); 
		}

	};



	return 0;
}