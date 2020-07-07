/*
 * 10989_수정렬하기3_정렬.cpp
 *
 *  Created on: 2019. 7. 29.
 *      Author: iautm
 */

#include <stdio.h>
#include <algorithm>
using namespace std;

int main10989(){

	int n;
	scanf("%d",&n);
	int a[10001]={0,};

	int temp=0;
	for(int i=0; i<n; i++){
		scanf("%d",&temp);
		a[temp] +=1;
	}

	for(int i=1;i<=10000; i++){
		if(a[i] >0){
		  for(int j=0; j<a[i]; j++){
			  printf("%d\n",i);
		  }
		}
	}


	return 0;
}


