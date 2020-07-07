

#include <stdio.h>
#include <math.h>

int main(){

	long long a, b, v;
	scanf("%lld %lld %lld", &a, &b, &v);

	long long sol = (v - b) / (a - b);
	roundf(sol);
	printf("%lld", sol);

	return 0;
}