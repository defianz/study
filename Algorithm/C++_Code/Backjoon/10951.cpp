/*
 * 10951.cpp
 *
 *  Created on: 2019. 7. 1.
 *      Author: iautm
 */


#include <stdio.h>


int main10951(){
	int A,B;

	// scanf 의 return 값은 받은변수의 갯수
	while(scanf("%d %d",&A,&B) == 2 ){
		printf("%d\n",A+B);
	}

	return 0;
}

