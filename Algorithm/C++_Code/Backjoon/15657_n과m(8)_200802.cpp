
#include <stdio.h>
#include <algorithm>
using namespace std;
//
//�ð� ����	�޸� ����	����	����	���� ���	���� ����
//1 ��	512 MB	4217	3639	3088	86.523%
//����
//N���� �ڿ����� �ڿ��� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.N���� �ڿ����� ��� �ٸ� ���̴�.
//
//N���� �ڿ��� �߿��� M���� �� ����
//���� ���� ���� �� ��� �ȴ�.
//�� ������ �񳻸������̾�� �Ѵ�.
//���̰� K�� ���� A�� A1 �� A2 �� ... �� AK - 1 �� AK�� �����ϸ�, �񳻸������̶�� �Ѵ�.
//�Է�
//ù° �ٿ� N�� M�� �־�����. (1 �� M �� N �� 8)
//
//��° �ٿ� N���� ���� �־�����.�Է����� �־����� ���� 10, 000���� �۰ų� ���� �ڿ����̴�.
//
//���
//�� �ٿ� �ϳ��� ������ ������ �����ϴ� ������ ����Ѵ�.�ߺ��Ǵ� ������ ���� �� ����ϸ� �ȵǸ�, �� ������ �������� �����ؼ� ����ؾ� �Ѵ�.
//
//������ ���� ������ �����ϴ� ������ ����ؾ� �Ѵ�.


int n, m;
int arr[8] = { 0, };
int *tmp;
int ans[8] = { 0, };


void merge(int l, int m, int r){

	int i = l;
	int j = m + 1;
	int ind = l;

	while (i <= m && j <= r){
		if (arr[i] <= arr[j]){
			tmp[ind++] = arr[i++];
		}
		else{
			tmp[ind++] = arr[j++];
		}
	}

	int rem = i > m ? j : i;

	while (ind <= r){
		tmp[ind++] = arr[rem++];
	}

	for (int x = l; x <= r; x++){
		arr[x] = tmp[x];
	}
}

void mergeSort(int l, int r){
	if (l < r){
		int m = l + (r - l) / 2;

		mergeSort(l, m);
		mergeSort(m + 1, r);

		merge(l, m, r);
	}
}

void nm(int cnt, int start){
	if (cnt == m){
		for (int i = 0; i < cnt; i++){
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i < n; i++){
		ans[cnt] = arr[i];
		nm(cnt + 1, i);
	}
}


int main(){
	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	tmp = new int[9];

	//sort(arr, arr + n);
	mergeSort(0,n-1);
	nm(0,0);

	return 0;
}