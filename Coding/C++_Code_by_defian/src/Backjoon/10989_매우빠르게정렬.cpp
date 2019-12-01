/*
 * 10989_매우빠르게정렬.cpp
 *
 *  Created on: 2019. 8. 17.
 *      Author: iautm
 */

#include <stdio.h>

int main109892(){

	int n, temp;
	int count[10001] ={0,};

	scanf("%d",&n);

	for(int i=0; i<n; i++){
		scanf("%d",&temp);
		count[temp]++;
	}

	for(int i=0; i<10001; i++){
		if(count[i] !=0 ){
			for(int j=0; j<count[i]; j++){
				printf("%d\n",i);
			}
		}
	}

	return 0;
}


