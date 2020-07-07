/*
 * 2751_수정렬2_퀵정렬구현.cpp
 *
 *  Created on: 2019. 8. 16.
 *      Author: iautm
 */

#include <stdio.h>


void quicksort(int* a, int start, int end){
	if (start >= end){
		return;
	}

	int key = start;
	int i = start +1;
	int j = end;

	while (i<=j){

		while (i<=end && a[key]<=a[i]){
			i++;
		}
		while (j>start && a[key] >= a[j]){
			j--;
		}

		if (i>j){
			int temp = a[j];
			a[j] = a[key];
			a[key] = temp;
			a[j] = a[i];
			a[i] = temp;
		}
	}

	quicksort(a,start, j-1);
	quicksort(a,j+1, end);

}

int main2751_fail(){

	int n;
	int a[1000001];
	scanf("%d",&n);

	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}

	quicksort(a,0,n-1);

	for (int i=0; i<n; i++){
		printf("&d\n",a[i]);
	}

	return 0;
}



