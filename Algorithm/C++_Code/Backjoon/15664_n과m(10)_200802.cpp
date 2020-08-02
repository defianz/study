

#include <iostream>
#include <set>
#include <vector>
using namespace std;

//����
//N���� �ڿ����� �ڿ��� M�� �־����� ��, �Ʒ� ������ �����ϴ� ���̰� M�� ������ ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//N���� �ڿ��� �߿��� M���� �� ����
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
int arr[9];
vector<int> tmp;
set<vector<int> > ans;


void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int l, int r){
	int i = l - 1;
	int p = r;
	for (int j = l; j <= r - 1; j++){
		if (arr[j] < arr[p]){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return i + 1;
}

void quickSort(int l, int r){
	if (l < r){
		int p = partition(l, r);

		quickSort(l, p - 1);
		quickSort(p + 1, r);
	}
}

void nm(int cnt, int start){
	if (cnt == m){
		ans.insert(tmp);
		return;
	}
	for (int i = start; i < n; i++){
		tmp.push_back(arr[i]);
		nm(cnt + 1, i + 1);
		tmp.pop_back();
	}
}

int main(){

	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	quickSort(0, n-1);

	nm(0,0);

	for (auto &t : ans){
		for (int i = 0; i < t.size(); i++){
			cout << t[i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}