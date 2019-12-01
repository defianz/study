/*
 * fibonaccibottomup.cpp
 *
 *  Created on: 2019. 7. 11.
 *      Author: iautm
 */



#include <stdio.h>


int d2[100];
int fibonacci2(int n){
	d2[0]=0;
	d2[1]=1;
	for(int i=2; i<=n; i++){
		d2[i] = d2[i-1] + d2[i-2];
	}
	return d2[n];
}

int mainfibonacci2(){

	printf("%d",fibonacci2(5));

	return 0;
}



