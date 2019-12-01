/*
 * 10430.cpp
 *
 *  Created on: 2019. 6. 29.
 *      Author: iautm
 */


#include <stdio.h>



int main10430(){
	int A,B,C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A+B)%C);
	printf("%d\n", (A%C+B%C)%C);
	printf("%d\n", (A*B)%C);
	printf("%d\n", (A%C*B%C)%C);

	return 0;
}

