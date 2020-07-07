/*
 * 6588_골드바흐의추측_수학.cpp
 *
 *  Created on: 2019. 7. 28.
 *      Author: iautm
 */


#include <stdio.h>


int main6588(){

	bool p6588[1000001];

	p6588[0] = p6588[1] = true;
	for(int i=2; i*i<=1000000; i++){
		if(p6588[i] == false){
			for (int j=i+i; j<=1000000; j+=i){
				p6588[j] = true;
			}
		}
	}

	while(true){
		int n =0;
		scanf("%d",&n);
		if (n == 0 ) break;
		int cnt = 0;

		for (int i=2; i <= n/2; i++){
			if(p6588[i] == false && p6588[n-i] == false){
				printf("%d = %d + %d\n",n,i,n-i);
				cnt = 1;
				break;
			}
		}
		if(cnt == 0 ){
			printf("Goldbach's conjecture is wrong.\n");
		}
	}


	return 0;
}
