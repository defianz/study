/*
 * 9465_스티커문제_dp.cpp
 *
 *  Created on: 2019. 7. 13.
 *      Author: iautm
 */

#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))

int d9465[100001][3];
int p9465[100001][3];

int main9465(){

	int n,t;

	scanf("%d",&t);


	for(int i=0; i<t; i++){
		scanf("%d",&n);
		for(int j=1; j <= n;j++){
			scanf("%d",&d9465[j][1]);
		}
		for (int j=1; j <= n; j++) {
			scanf("%d", &d9465[j][2]);
		}
		p9465[0][0] = p9465[0][1]= p9465[0][2]= 0;
		for(int a=1; a<=n;a++){
			p9465[a][0] = max(p9465[a-1][0],max(p9465[a-1][1],p9465[a-1][2]));
			p9465[a][1] = max(p9465[a-1][0],p9465[a-1][2]) + d9465[a][1];
			p9465[a][2] = max(p9465[a-1][0],p9465[a-1][1]) + d9465[a][2];
		}

		int sol = max(p9465[n][0],max(p9465[n][1],p9465[n][2]));

		printf("%d\n",sol);

	}

	return 0;
}


