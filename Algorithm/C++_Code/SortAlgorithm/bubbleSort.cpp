#include <stdio.h>
#include <algorithm>


int main(){
	int n = 10;
	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	for (int i = 0; i < n - 1; i++){
		// 처음부터 끝 전(n-1)까지 선택하고  ( 두개씩 비교해야되기떄문에 n-1 )
		for (int j = 0; j < n - i - 1; j++){
			// 여기서 부터 실질적으로 교체하는 곳인데, 앞에서부터 두개씩 비교해가면서 제일 "마지막 위치" 를 정렬한다
			// i 가 하나씩 커질수록, "마지막 위치"는 정렬됨을 알 수있다.
			// ex ) i=0 일때 arr[10] 이 결정 (가장 큰 수로)
			//      i=1 일때 arr[9] 가 결정 ( 그 다음 큰 수로)
			if (arr[j] > arr[j + 1]){
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}

	// 탐색범위
	// Outer : 0 -> n-1
	// Inner : 0 -> n-i-1

	//Time Complexity
	// Worst : O(n^2)
	// Average : O(n^2)
	// Best : O(n^2)

	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}



	return 0;
}