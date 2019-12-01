/*
 * fibonacci.cpp
 *
 *  Created on: 2019. 7. 11.
 *      Author: iautm
 */

#include <stdio.h>

int memo[100];
int fibonacci(int n){
	if(n <=1 ){
		return n;
	} else {
		if (memo[n] >0){
			return memo[n];
		}
		memo[n]= fibonacci(n-1)+fibonacci(n-2);
		return memo[n];
	}
}



int mainfibonacci(){

	printf("%d",fibonacci(5));

	return 0;
}



