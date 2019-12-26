

#include <stdio.h>


int main(){

	int a, b;
	scanf("%d %d", &a, &b);
	int tmp = a * 60 + b;
	tmp = tmp - 45;
	if (tmp < 0) tmp += 1440;
	int ansh = tmp / 60;
	int ansm = tmp % 60;

	printf("%d %d", ansh, ansm);

	return 0;
}