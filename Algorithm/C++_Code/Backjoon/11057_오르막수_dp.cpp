/*
 * 11057_오르막수_dp.cpp
 *
 *  Created on: 2019. 7. 13.
 *      Author: iautm
 */

#include <stdio.h>
long long d11057[1001][11];

int main11057(){
	int n;
	scanf("%d",&n);


	for(int i=0;i<=9;i++){
		d11057[1][i]=1;
	}

	for(int i=2; i<=n;i++){
		for(int j=0; j<=9;j++){
			for(int m=0; m<=j;m++){
				d11057[i][j]+=d11057[i-1][m];
				d11057[i][j] %= 10007;
			}
		}
	}
	long long sum=0;
	for(int j=0;j<=9;j++){
		sum += d11057[n][j];
	}

	printf("%d",sum%10007);
	return 0;
}


