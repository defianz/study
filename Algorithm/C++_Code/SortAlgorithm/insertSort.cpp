#include <stdio.h>


int main(){

	int n = 10;
	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	int i,j,key;
	// ���ı����� �κ�Array�� ���ο� element�� ���� ���� ���� index�� ���ں��� ���ʴ�� �񱳵Ǿ� ���ο� ���ĺκ� Array�� �����Ѵ�.
	for (i = 1; i < n; i++){
		key = arr[i];
		// ���� ���� �˰��� key�� �ʿ� (���ο� element)
		j = i - 1;
		while (j >= 0 && arr[j] > key){
			// ���ο� element (key)�� ������ ���� ������ �κ� Array�� ���ڵ�� �����ش�
			// �ٲ��� j�� �ϳ��� �پ��鼭, ���� ������ �κ� Array�� �ٸ� ���ҵ���� key�� �����ش�.
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		// �������� �ڱ� �ڸ��� ã�ư��� ���ο� element (key��!)
	}

	// Ž������
	// Outer : 1 -> n
	// Inner : j >=0 && arr[i] > key  

	// �ð� ���⵵
	// Worst : O(n^2)
	// Averaget : O(n^2)
	// Best : O(n)   > Inner loop (�� while) �� ����쿡 ���� �ȵ� ��� (�̹� ��� �� ���ĵǾ��ִ� ���)

	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}

	return 0;
}