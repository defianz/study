/*
 * 1912_¿¬¼ÓÇÕ_dp.cpp
 *
 *  Created on: 2019. 7. 22.
 *      Author: iautm
 */


#include <stdio.h>
#define max(x,y) ((x)>(y)?(x):(y))

int main1912(){

	int n;
	scanf("%d",&n);
	int d1912[n+1];
	int p1912[n+1];

	for (int i=1; i<=n; i++){
		scanf("%d",&p1912[i]);
		d1912[i] = p1912[i];
	}
	d1912[1] = p1912[1];


	int ans =d1912[1];
	for (int i=2; i<=n; i++){
		d1912[i] = max(d1912[i], d1912[i-1]+p1912[i]);
		ans = max(d1912[i], ans);
	}

	printf("%d", ans);

	return 0;
}


