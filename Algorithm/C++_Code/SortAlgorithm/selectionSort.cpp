#include <stdio.h>
#include <algorithm>

int main(){

	int n = 10;
	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	int i, j, min;
	// ���� ���� ���ڸ� ã�� ���� (arr[min]) ���������� �̵�
	// Outer ������ �ѹ� �������� element �ϳ��� ������ġ�� Ȯ�� 
	for (i = 0; i < n - 1; i++){
		min = i;
		// ���� ���� index ����
		for (j = i + 1; j < n; j++){
			// i(min) ���� ū index�� ��� ����
			if (arr[j] < arr[min])
				min = j;
				// arr[min] ���� �������� ���� ��� �ش� index ���� (�� �������� ���ü��� �����Ƿ� �ٷ� �ٲ��� ����)
		}
		std::swap(arr[min], arr[i]);
		// inner ���� ���� �� ��ȯ�Ͽ�, ���ʿ� ���� ��ġ Ȯ��
	}

	// Ž������
	// Outer : 0 -> n-1
	// Inner : 0 -> i+1

	// �ð����⵵
	// Worst : O(n^2)
	// Average : O(n^2)
	// Best : O(n^2)

	for (int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}