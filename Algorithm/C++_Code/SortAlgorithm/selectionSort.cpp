#include <stdio.h>
#include <algorithm>

int main(){

	int n = 10;
	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	int i, j, min;
	// 제일 작은 숫자를 찾기 위해 (arr[min]) 순차적으로 이동
	// Outer 루프가 한번 돌때마다 element 하나의 최종위치가 확정 
	for (i = 0; i < n - 1; i++){
		min = i;
		// 가장 작은 index 가정
		for (j = i + 1; j < n; j++){
			// i(min) 보다 큰 index를 모두 돌음
			if (arr[j] < arr[min])
				min = j;
				// arr[min] 보다 작은값이 나올 경우 해당 index 저장 (더 작은값이 나올수도 있으므로 바로 바꾸지 않음)
		}
		std::swap(arr[min], arr[i]);
		// inner 루프 종료 후 교환하여, 왼쪽에 원소 위치 확정
	}

	// 탐색범위
	// Outer : 0 -> n-1
	// Inner : 0 -> i+1

	// 시간복잡도
	// Worst : O(n^2)
	// Average : O(n^2)
	// Best : O(n^2)

	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}