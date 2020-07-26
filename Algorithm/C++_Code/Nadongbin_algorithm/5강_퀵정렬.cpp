/*
 * 5°­_ÄüÁ¤·Ä.cpp
 *
 *  Created on: 2019. 8. 16.
 *      Author: iautm
 */


#include <stdio.h>

int a[10] = {1,10,5,8,7,6,5,3,2,9};

void show(){
	for (int i=0; i<10; i++){
		printf("%d", a[i]);
	}
}

void quicksort5(int* a, int start, int end){

	if (start >= end){
		return;
	}

	int key = start;
	int i = start + 1, j = end, temp;

	while (i<=j){
		while(i <= end && a[i] <= a[key]){
			i++;
		}
		while ( j > start && a[j] >= a[key]){
			j--;
		}

		if( i>j){
			temp = a[j];
			a[j] = a[key];
			a[key] = temp;
		} else {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}

	quicksort5(a,start, j-1);
	quicksort5(a,j+1, end);

}


int main5(){



	quicksort5(a,0,9);

	show();



	return 0;
}

