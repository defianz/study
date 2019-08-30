/*
 * 11054_가장긴바이토닉_dp.cpp
 *
 *  Created on: 2019. 7. 20.
 *      Author: iautm
 */


#include <stdio.h>


int a11054[1001];
int d11054[1001];
int d110542[1001];
int p11054[1001];

int main11054(){

	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &a11054[i]);
		d11054[i] = 1;
		d110542[i] = 1;
	}

	for (int i=1; i<= n; i++){
		for (int j=1; j<i; j++){
			if(a11054[i]>a11054[j] && d11054[i]<d11054[j]+1){
				d11054[i] = d11054[j]+1;
			}
		}
		for (int j=n; j>n-i; j--){
			if(a11054[n-i]>a11054[j] && d110542[n-i]<d110542[j]+1){
				d110542[n-i] = d110542[j]+1;
			}
		}
	}

	int ans=0;
	for(int i=1; i<=n; i++){
		p11054[i] = d11054[i] + d110542[i]-1;
		if(ans<p11054[i]) {
			ans = p11054[i];
		}

	}

	printf("%d",ans);

	return 0;
}

