/*
 * 1929_에라토스테네스체,소수구하기.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */

#include <stdio.h>



int main1929() {

	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int max =1000000;
	bool c[max + 1];

	c[0]=c[1] = true;
	for (int i = 2; i*i <= max; i++) {
		if (c[i] == false) {
			for (int j = i+i; j <= max; j+=i) {
				c[j] = true;
			}
		}
	}

	for(int i=m; i<=n; i++){
		if(c[i]==false){
		printf("%d\n",i);
		}
	}

	return 0;
}

