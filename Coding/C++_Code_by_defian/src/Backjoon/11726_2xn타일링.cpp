/*
 * 11726_2xn≈∏¿œ∏µ.cpp
 *
 *  Created on: 2019. 7. 11.
 *      Author: iautm
 */

#include <stdio.h>

int d11726[1001];

int fun11726(int n){
	if (n==1) d11726[1]=1;
	if (n==2) d11726[2]=2;
	if (n==3) d11726[3]=3;
	if(d11726[n] >0) return d11726[n];
	d11726[n] = (fun11726(n-1) + fun11726(n-2))%10007;
	return d11726[n];


}


int main11726(){

	int n;
	scanf("%d",&n);

	printf("%d",fun11726(n));

	return 0;
}



