

#include <stdio.h>

int *arr2;

void merge(int arr[], int l, int m, int r){
	// 정복의 과정은 두개의 배열(왼쪽, 오른쪽) 과 또 하나의 임시적 배열이 필요
	// 임시적 배열에 두개의 배열을 비교하여 작은 수를 push 하며, 들어간 쪽의 index를 하나씩 늘려준다.
	int i = l;
	int j = m+1;
	int k = l;
	while (i <= m && j <= r){
		if (arr[i] <= arr[j]){
			arr2[k++] = arr[i++];
		}
		else {
			arr2[k++] = arr[j++];
		}

	};


	// 위 과정이 모두 끝난 후, 나머지 값을 모두 넣어주고 진짜 배열에 다 넣어준다.
	int tmp = i > m ? j : i;
	while (k <= r) arr2[k++] = arr[tmp++];
	for (int x = l; x <= r; x++){
		arr[x] = arr2[x];
	}
}

void mergeSort(int arr[], int l, int r){
	if (l < r){
		int m = l + (r - l) / 2;
		
		// 아래는 분할 과정이다. 재귀 함수를 통해 계속적으로 분할한다.
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		// 위 분할이 마치게 되면, 정복(정렬하여 합침) 하기 시작한다
		merge(arr, l, m, r);
	}
}

int main(){

	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };
	arr2 = new int[10];

	// 머지소트는 분할정복으로 진행된다.
	// mergeSort의 경우 분할 과정
	mergeSort(arr, 0, 9);


	// 시간복잡도
	//worst: O(nlogn)
	//Average: O(nlogn)
	//Best: O(nlogn)

	for (int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}