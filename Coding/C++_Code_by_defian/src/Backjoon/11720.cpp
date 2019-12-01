/*
 * 11720.cpp
 *
 *  Created on: 2019. 7. 1.
 *      Author: iautm
 */



#include <stdio.h>

int main11720(){
	int N,tmp,sol;
	scanf("%d\n",&N);
	sol = 0;
	for(int i=0; i<N; i++){
		scanf("%1d",&tmp);
		sol += tmp;
	}
	printf("%d",sol);

	return 0;
}
