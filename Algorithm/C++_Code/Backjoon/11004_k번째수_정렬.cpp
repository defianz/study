/*
 * 11004_k번째수_정렬.cpp
 *
 *  Created on: 2019. 7. 29.
 *      Author: iautm
 */


#include <stdio.h>
#include <algorithm>
using namespace std;


int main11004(){

	int n,k;
	scanf("%d %d",&n,&k);
	long long d11004[n];


	for (int i=0; i<n; i++){
		scanf("%lld",&d11004[i]);
	}

	sort(d11004,d11004+n);

	printf("%lld",d11004[k-1]);

	return 0;
}
