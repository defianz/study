

#include <stdio.h>
#include <math.h>


int main(){
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);

	if (b >= c){
		printf("-1");
		return 0;
	}

	long long tmp = a / (c - b) + 1;
	roundf(tmp);
	printf("%lld", tmp);

	return 0;
}