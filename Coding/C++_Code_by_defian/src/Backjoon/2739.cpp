/*
 * 2739.cpp
 *
 *  Created on: 2019. 6. 29.
 *      Author: iautm
 */



#include <stdio.h>;

int main2739(){
	int N;
	scanf("%d", &N);

	for(int i=0; i<9;i++){
		printf("%d * %d = %d\n",N,i+1,N*(i+1));
	}

	return 0;
}



