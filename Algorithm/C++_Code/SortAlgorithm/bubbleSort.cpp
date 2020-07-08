#include <stdio.h>
#include <algorithm>


int main(){
	int n = 10;
	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	for (int i = 0; i < n - 1; i++){
		// ó������ �� ��(n-1)���� �����ϰ�  ( �ΰ��� ���ؾߵǱ⋚���� n-1 )
		for (int j = 0; j < n - i - 1; j++){
			// ���⼭ ���� ���������� ��ü�ϴ� ���ε�, �տ������� �ΰ��� ���ذ��鼭 ���� "������ ��ġ" �� �����Ѵ�
			// i �� �ϳ��� Ŀ������, "������ ��ġ"�� ���ĵ��� �� ���ִ�.
			// ex ) i=0 �϶� arr[10] �� ���� (���� ū ����)
			//      i=1 �϶� arr[9] �� ���� ( �� ���� ū ����)
			if (arr[j] > arr[j + 1]){
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}

	// Ž������
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