/*
 * 10952.cpp
 *
 *  Created on: 2019. 6. 29.
 *      Author: iautm
 */

#include <stdio.h>

int main10952(){

	int A,B;
	while(1){
		scanf("%d %d",&A, &B);
		if(A == 0 && B ==0 ){
			break;
		}
		printf("%d\n",A+B);
	}
	return 0;
}


