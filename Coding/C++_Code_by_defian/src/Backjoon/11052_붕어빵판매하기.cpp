/*
 * 11052_ºØ¾î»§ÆÇ¸ÅÇÏ±â.cpp
 *
 *  Created on: 2019. 7. 13.
 *      Author: iautm
 */


#include <stdio.h>

int sol=0;

int p[1001];
int d11052[1001];

int dp11052(int m){
	if (m==0) return 0;
	if(d11052[m]>0) return d11052[m];
	for(int i=1; i<=m; i++){
		int temp = p[i] + dp11052(m-i);
		if (temp > d11052[m]) d11052[m] = temp;
	};
	return d11052[m];
}

int main11052(){

	int n;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		scanf("%d ",&p[i]);
	}
	scanf("%d",&p[n]);
	//p[0] = 1 ¹øÂ°
	printf("%d",dp11052(n));


	return 0;
}

