/*
 * 11055_ 가장큰증가합_dp.cpp
 *
 *  Created on: 2019. 7. 14.
 *      Author: iautm
 */

#include <stdio.h>

int a11055[1001];
int d11055[1001];

int main11055(){

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		scanf("%d",&a11055[i]);
	}

	for(int i=1; i<=n; i++){
		d11055[i] = a11055[i];
		for(int j=1; j<i; j++){
			if(a11055[i] > a11055[j] && d11055[i] < d11055[j]+a11055[i]){
				d11055[i] = d11055[j] + a11055[i];
			}
		}
	}

	int ans = d11055[1];
	for (int i=1; i<=n; i++){
		if(d11055[i] > ans) ans = d11055[i];
	}

	printf("%d", ans);

	return 0;
}


