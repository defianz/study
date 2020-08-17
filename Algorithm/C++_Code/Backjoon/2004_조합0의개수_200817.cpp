
#include <stdio.h>
long long n, m;

long long min(long long a, long long b){
	return a > b ? b : a;
}

int main(){
	scanf("%lld %lld", &n, &m);
	long long two = 0;
	long long five = 0;

	for (long long i = 2; i <= n; i *= 2){
		two += n / i;
	}

	for (long long i = 2; i <= m; i *= 2){
		two -= m / i;
	}

	for (long long i = 2; i <= (n - m); i *= 2){
		two -= (n - m) / i;
	}


	for (long long i = 5; i <= n; i *= 5){
		five += n / i;
	}

	for (long long i = 5; i <= m; i *= 5){
		five -= m / i;
	}

	for (long long i = 5; i <= (n - m); i *= 5){
		five -= (n - m) / i;
	}

	printf("%lld", min(two,five));

	return 0;
}