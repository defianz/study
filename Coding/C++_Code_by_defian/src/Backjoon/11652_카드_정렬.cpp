/*
 * 11652_카드_정렬.cpp
 *
 *  Created on: 2019. 7. 29.
 *      Author: iautm
 */

#include <stdio.h>
#include <algorithm>
using namespace std;

int main11652(){

	int n;
	scanf("%d",&n);
	long long d11652[n];

	for(int i=0;i<n; i++){
		scanf("%lld",&d11652[i]);
	}

	sort(d11652,d11652+n);

	int cnt =0;
	int tmp =1;
	long long num =d11652[0];
	for (int i=0; i<n; i++){
		if(d11652[i] == d11652[i+1]){
			tmp += 1;
		} else {
			if(tmp > cnt) {
				cnt = tmp;
				num = d11652[i];
			}
			tmp =1;
		}
	}

	printf("%lld",num);
	return 0;
}


