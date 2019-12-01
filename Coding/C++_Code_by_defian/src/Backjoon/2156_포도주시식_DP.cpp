 /*
 * 2156_포도주시식_DP.cpp
 *
 *  Created on: 2019. 7. 14.
 *      Author: iautm
 */

#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))

int p2156[10001];
int d2156[10001][3];

int main2156(){

	int n;
	scanf("%d",&n);

	for(int i=1;i<=n;i++){
		scanf("%d",&p2156[i]);
	}

	d2156[1][1] = p2156[1];
	d2156[1][0] = d2156[0][0] = 0;


	for (int i=2; i<=n; i++){
		d2156[i][0] = max(d2156[i-1][2],max(d2156[i-1][0],d2156[i-1][1]));
		d2156[i][1] = d2156[i-1][0]+p2156[i];
		d2156[i][2] = d2156[i-1][1]+p2156[i];
	}

	int sum = max(d2156[n][2],max(d2156[n][1],d2156[n][0]));
	printf("%d",sum);

	return 0;
}



