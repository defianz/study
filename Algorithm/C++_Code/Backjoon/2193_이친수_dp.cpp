/*
 * 2193_ÀÌÄ£¼ö_dp.cpp
 *
 *  Created on: 2019. 7. 13.
 *      Author: iautm
 */



#include<stdio.h>
//using namespace std;


long long d2193[91];

long long  dp2193(int n){
	if (n==1) return 1;
	if (n==2) return 1;
	if(d2193[n] >0 ) return d2193[n];
	d2193[n] = dp2193(n-1) + dp2193(n-2);
	return d2193[n];
}

int main2193(){

	int n;
	scanf("%d",&n);

	printf("%lli",dp2193(n));

	return 0;
}

