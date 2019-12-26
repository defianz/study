

#include <stdio.h>


int main(){

	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	int ff = a*b;

	for (int i = 1; i <= 3;i++){
		int tmp = b % 10;
		printf("%d\n", a*tmp);
		b = b / 10;
	}

	printf("%d\n", ff);

	return 0;
}