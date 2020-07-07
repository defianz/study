/*
 * 10871.cpp
 *
 *  Created on: 2019. 6. 30.
 *      Author: iautm
 */

#include <stdio.h>

int main10871(){
	int N,X;
	scanf("%d %d", &N, &X);

	int tmp;
	for(int i=0; i<N;i++){
		scanf("%d", &tmp);
		if(tmp<X){
			printf("%d ",tmp);
		}
	}
	return 0;
}


