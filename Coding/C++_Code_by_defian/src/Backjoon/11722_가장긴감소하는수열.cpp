/*
 * 11722_가장긴감소하는수열.cpp
 *
 *  Created on: 2019. 7. 20.
 *      Author: iautm
 */


#include <stdio.h>

int a11722[1001];
int d11722[1001];


int main11722(){

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		scanf("%d",&a11722[i]);
		d11722[i] = 1;
	}

	for (int i=1; i<=n; i++){
		for (int j=1; j<i; j++){
			if(a11722[j]>a11722[i] && d11722[j]+1>d11722[i])
			d11722[i] = d11722[j] +1;
		}
	}

	int ans =0;
	for (int i=1; i<=n; i++){
		if(ans<d11722[i]) ans=d11722[i];
	}

	printf("%d",ans);
	return 0;
}


