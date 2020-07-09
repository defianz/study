

#include <stdio.h>

int *arr2;

void merge(int arr[], int l, int m, int r){
	// ������ ������ �ΰ��� �迭(����, ������) �� �� �ϳ��� �ӽ��� �迭�� �ʿ�
	// �ӽ��� �迭�� �ΰ��� �迭�� ���Ͽ� ���� ���� push �ϸ�, �� ���� index�� �ϳ��� �÷��ش�.
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


	// �� ������ ��� ���� ��, ������ ���� ��� �־��ְ� ��¥ �迭�� �� �־��ش�.
	int tmp = i > m ? j : i;
	while (k <= r) arr2[k++] = arr[tmp++];
	for (int x = l; x <= r; x++){
		arr[x] = arr2[x];
	}
}

void mergeSort(int arr[], int l, int r){
	if (l < r){
		int m = l + (r - l) / 2;
		
		// �Ʒ��� ���� �����̴�. ��� �Լ��� ���� ��������� �����Ѵ�.
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		// �� ������ ��ġ�� �Ǹ�, ����(�����Ͽ� ��ħ) �ϱ� �����Ѵ�
		merge(arr, l, m, r);
	}
}

int main(){

	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };
	arr2 = new int[10];

	// ������Ʈ�� ������������ ����ȴ�.
	// mergeSort�� ��� ���� ����
	mergeSort(arr, 0, 9);


	// �ð����⵵
	//worst: O(nlogn)
	//Average: O(nlogn)
	//Best: O(nlogn)

	for (int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}