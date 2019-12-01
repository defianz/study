/*
 * 1934_최소공배수.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */


#include <stdio.h>

long long gcd1934(int a, int b){
	if (b==0){
		return a;
	} else {
		return gcd1934(b,a%b);
	}
}

int main1934(){

	int tc,a,b;
	long long gcd,lcm;
	scanf("%d",&tc);

	while(tc--){
		scanf("%d",&a);
		scanf("%d",&b);

		gcd = gcd1934(a,b);
		lcm = a*b/gcd;

		printf("%lld\n",lcm);

	}

	return 0;
}


