/*
 * 1463_1로만들기.cpp
 *
 *  Created on: 2019. 7. 11.
 *      Author: iautm
 */

#include <stdio.h>

int d[1000001];

int go(int n) {
	if (n == 1) {
		return 0;
	} else {
		if (d[n] > 0) {
			return d[n];
		} else {
			d[n] = 1 + go(n-1);
			if (n % 3 == 0) {
				int temp = go(n / 3) + 1;
				if (d[n] > temp)
					d[n] = temp;
			} else if (n % 2 == 0) {
				int temp = 1 + go(n / 2);
				if (d[n] > temp)
					d[n] = temp;

			}
			return d[n];
		}
	}
}

int main1463_1(){

	int n;
	scanf("%d",&n);

	printf("%d",go(n));

	return 0;
}


