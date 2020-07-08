#include <stdio.h>


int main(){

	int n = 10;
	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	int i,j,key;
	// 정렬구성된 부분Array에 새로운 element가 들어와 가장 나중 index의 인자부터 차례대로 비교되어 새로운 정렬부분 Array를 구성한다.
	for (i = 1; i < n; i++){
		key = arr[i];
		// 삽입 정렬 알고리즘에 key가 필요 (새로운 element)
		j = i - 1;
		while (j >= 0 && arr[j] > key){
			// 새로운 element (key)를 기존의 정렬 구성된 부분 Array의 인자들과 비교해준다
			// 바뀔경우 j가 하나씩 줄어들면서, 정렬 구성된 부분 Array의 다른 원소들과도 key를 비교해준다.
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		// 마지막에 자기 자리를 찾아가는 새로운 element (key값!)
	}

	// 탐색범위
	// Outer : 1 -> n
	// Inner : j >=0 && arr[i] > key  

	// 시간 복잡도
	// Worst : O(n^2)
	// Averaget : O(n^2)
	// Best : O(n)   > Inner loop (위 while) 가 모든경우에 진행 안될 경우 (이미 모두 잘 정렬되어있는 경우)

	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}