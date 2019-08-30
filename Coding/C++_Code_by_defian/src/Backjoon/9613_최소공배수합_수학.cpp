/*
 * 9613_최소공배수합_수학.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */




#include <stdio.h>

long long gcd9613(int a, int b){
	if (b==0){
		return a;
	} else {
		return gcd9613(b,a%b);
	}
}


int main9613(){

	int t,n;

	scanf("%d",&t);

	while(t--){

	scanf("%d",&n);
	long long ans=0;
	int d[n+1]={0,};

	for (int i=1; i<=n; i++){
		scanf("%d",&d[i]);
	}

	for (int i=1; i<=n; i++){
		for (int j=i+1; j<=n; j++){
			ans += gcd9613(d[i],d[j]);
		}
	}

	printf("%lld\n",ans);

	}

	return 0;
}
