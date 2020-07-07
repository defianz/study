/*
 * 11053_가장긴증가하는부분수열_dp.cpp
 *
 *  Created on: 2019. 7. 14.
 *      Author: iautm
 */
#include <stdio.h>

int a11053[1001];
int d11053[1001];

int main11053(){

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		scanf("%d",&a11053[i]);
		d11053[i] = 1;
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			if(a11053[i]>a11053[j]){
				int temp = d11053[j] + 1;
				if(temp>d11053[i]) d11053[i] = temp;
			}
		}
	}
	int ans = d11053[1];
	for (int i=1; i<=n; i++){
		if(d11053[i] > ans){
			ans = d11053[i];
		}
	}
	printf("%d", ans);


	return 0;
}



