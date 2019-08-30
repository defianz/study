/*
 * 2133_타일채우기_dp.cpp
 *
 *  Created on: 2019. 7. 22.
 *      Author: iautm
 */


#include <stdio.h>

int main2133(){

	int n;
	scanf("%d",&n);

	int d2133[n+1]= {0,};

	d2133[0] = 1;

	for(int i=2; i<=n ; i+=2){
		for(int j=2; j<=i; j+=2){
			d2133[i] += 2*d2133[i-j];
		if(j==2) d2133[i] += d2133[i-j];
		}
	}

	printf("%d",d2133[n]);

	return 0;
}


