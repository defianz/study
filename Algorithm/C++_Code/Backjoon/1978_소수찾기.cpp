/*
 * 1978_소수찾기.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */

#include <stdio.h>

int prime1978(int n){
	if(n < 2){
		return 0;
	} else {
		for (int i=2; i*i<=n; i++){
			if(n % i == 0) return 0;
		}
	}
	return 1;
}


int main1978(){

	int n;
	scanf("%d", &n);
	int ans =0;

	for(int i=0; i<n; i++){
		int tmp=0;
		scanf("%d",&tmp);
		ans += prime1978(tmp);
	}

	printf("%d", ans);

	return 0;
}


