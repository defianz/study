/*
 * 2331_반복수열_그래프.cpp
 *
 *  Created on: 2019. 7. 31.
 *      Author: iautm
 */


#include <stdio.h>


int d2331[10000];
int check2331[1000000];
int cnt2331;

int pow2331(int x, int p){
	int ans =1;
	for(int i=0; i<p; i++){
		ans = ans *x;
	}
	return ans;
}


int dfs2331(int bdn, int P, int cnt) {
	if (check2331[bdn] == 0) {
		check2331[bdn] = cnt;
		int tmp = 0;
		while (bdn > 0) {
			tmp += pow2331(bdn%10,P);
			bdn /= 10;
		}
		cnt++;
		dfs2331(tmp, P, cnt);
	} else{
		return check2331[bdn]-1;
	}
}

int main2331(){

	int A,P;
	scanf("%d %d",&A,&P);

	cnt2331 = 1;
	d2331[cnt2331] =A;
	printf("%d",dfs2331(A, P, cnt2331));


	return 0;
}

