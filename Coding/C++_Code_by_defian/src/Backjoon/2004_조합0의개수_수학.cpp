/*
 * 2004_조합0의개수_수학.cpp
 *
 *  Created on: 2019. 7. 28.
 *      Author: iautm
 */


#include <stdio.h>
#define min(x,y) ((x)<(y)?(x):(y))


int main2004(){

	long long n,m, two, five;
	scanf("%llu %llu",&n,&m);
	two = five = 0;

	for (long long i = 2; i <= n; i *= 2) {
		two += n / i;
	}

	for (long long i = 2; i <= m; i *= 2) {
		two -= m / i;
	}

	for (long long i = 2; i <= (n - m); i *= 2) {
		two -= (n - m) / i;
	}

	for (long long i = 5; i <= n; i *= 5) {
		five += n / i;
	}

	for (long long i = 5; i <= m; i *= 5) {
		five -= m / i;
	}

	for (long long i = 5; i <= (n - m); i *= 5) {
		five -= (n - m) / i;
	}

	printf("%llu\n",min(two,five));


	return 0;
}

