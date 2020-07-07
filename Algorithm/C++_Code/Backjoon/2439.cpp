/*
 * 2439.cpp
 *
 *  Created on: 2019. 6. 29.
 *      Author: iautm
 */


#include <stdio.h>

int main2439(){
	int N;
	scanf("%d",&N);

	for(int i=0; i<N; i++){
		for(int j=0; j<N-(i+1);j++){
			printf(" ");
		}
		for(int j=0; j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

