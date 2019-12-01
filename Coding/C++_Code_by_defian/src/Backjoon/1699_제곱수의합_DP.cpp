/*
 * 1699_Á¦°ö¼öÀÇÇÕ_DP.cpp
 *
 *  Created on: 2019. 7. 22.
 *      Author: iautm
 */

#include<stdio.h>
#define min(x,y) ((x)<(y)?(x):(y))


int main1699(){

	int n;

	scanf("%d",&n);
	int d1699[n+1];

	d1699[0] = 0;

	for (int i=1; i<=n; i++){
		d1699[i] = i;
		for( int j=1; j*j<=i; j++){
//			if(d1699[i] > d1699[i-j*j]+1) d1699[i] = d1699[i-j*j]+1;
			d1699[i] = min(d1699[i-j*j] +1,d1699[i]);
		}
	}

	printf("%d",d1699[n]);

	return 0;
}


