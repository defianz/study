/*
 * 2579_계단오르기_dp.cpp
 *
 *  Created on: 2019. 7. 22.
 *      Author: iautm
 */


#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))

int main2579(){

	int n;
	scanf("%d",&n);

	int p2579[n+1];
	int d2579[n+1][2];
	for(int i=1; i<=n; i++){
		scanf("%d",&p2579[i]);
	}

	d2579[0][0] = d2579[0][1] = 0;
	d2579[1][0] = d2579[1][1] = p2579[1];

	for (int i=2; i<=n; i++){
		d2579[i][0] = max(d2579[i-2][1],d2579[i-2][0]) + p2579[i];
		d2579[i][1] = d2579[i-1][0] + p2579[i];
	}
	int ans = max(d2579[n][0], d2579[n][1]);
	printf("%d", ans);

	return 0;
}

