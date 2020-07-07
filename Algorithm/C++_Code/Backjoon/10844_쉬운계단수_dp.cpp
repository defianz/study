/*
 * 10844_쉬운계단수_dp.cpp
 *
 *  Created on: 2019. 7. 13.
 *      Author: iautm
 */


#include <stdio.h>

long long d10844[101][10];


int main10844(){

	int n;
	scanf("%d",&n);
	for(int i=1; i<=9; i++) d10844[1][i] = 1;

	for(int i=2; i<=n; i++){
		for(int j=1; j<=8;j++){
			d10844[i][j] = (d10844[i-1][j+1]+d10844[i-1][j-1]) % 1000000000;
		}
		d10844[i][9] = d10844[i-1][8] % 1000000000;
		d10844[i][0] = d10844[i-1][1] % 1000000000;
	}
	long long sum=0;
	for(int i=0; i<=9; i++){
		sum += d10844[n][i];
	}

	printf("%d",sum%1000000000);

	return 0;
}

