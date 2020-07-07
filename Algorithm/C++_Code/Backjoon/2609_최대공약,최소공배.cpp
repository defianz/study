/*
 * 2609_최대공약,최소공배.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */

#include <stdio.h>

int gcd2(int a, int b) {
	if(b==0){
		return a;
	} else{
		gcd2(b,a%b);
	}

}


int main2609(){

	int a,b, gcd,lcm;
	scanf("%d",&a);
	scanf("%d",&b);

	gcd = gcd2(a,b);
	lcm = a*b/gcd;

	printf("%d\n",gcd);
	printf("%d",lcm);

	return 0;
}


