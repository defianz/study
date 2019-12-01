/*
 * 1463_1로만들기b-u.cpp
 *
 *  Created on: 2019. 7. 11.
 *      Author: iautm
 */


#include <stdio.h>

int d1463[1000001];

int gobu(int n){
	d1463[1]=0;

	for(int i=2; i<=n; i++){
		d1463[i] = d1463[i-1]+1;
		if ( i%2 ==0 && d1463[i] > d1463[i/2]+1) d1463[i]=d1463[i/2]+1;
		if ( i%3 ==0 && d1463[i] > d1463[i/3]+1) d1463[i]=d1463[i/3]+1;

	}
	return d1463[n];


}

int main1463bu(){

	int n;
	scanf("%d",&n);

	printf ("%d",gobu(n));


	return 0;
}

