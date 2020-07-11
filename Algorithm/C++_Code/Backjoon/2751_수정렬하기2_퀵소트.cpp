

#include <iostream>
using namespace std;


void swap(int *a, int *b){
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int partition(int arr[], int l, int r){
	int m = (l + r) / 2;
	swap(&arr[m], &arr[r]);

	int pivot = arr[r];
	int i = l - 1;
	for (int j = l; j <= r - 1; j++){
		if (arr[j] < pivot){
			i++;
			swap(&arr[j], &arr[i]);
		}
	}
	swap(&arr[i+1], &arr[r]);

	return i+1;
}


void quickSort(int arr[], int l, int r){
	if (l < r){

		int p = partition(arr, l, r);
		
		quickSort(arr, l, p - 1);
		quickSort(arr, p + 1, r);
	}
}

int main(){

	int n, tmp;
	cin >> n;
	int arr[1000000];

	for (int i = 0; i < n; i++){
		cin >> tmp;
		arr[i] = tmp;
	}

	quickSort(arr, 0, n - 1);
	
	for (int i = 0; i < n; i++){
		cout << arr[i] << "\n";
	}

	return 0;
}