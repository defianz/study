

#include <iostream>
#include <vector>
using namespace std;

int *arr;
vector<int> v;

void merge(int l, int m, int r){
	int i = l;
	int j = m + 1;
	int k = l;

	while (i <= m && j <= r){
		if (v[i] < v[j]){
			arr[k++] = v[i++];
		}
		else{
			arr[k++] = v[j++];
		}
	}

	int tmp = i > m ? j : i;
	while (k <= r){
		arr[k++] = v[tmp++];
	}

	for (int x = l; x <= r; x++){
		v[x] = arr[x];
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

int main(){

	int n,tmp;

	cin >> n;

	arr = new int[n];
	
	for (int i = 0; i < n; i++){
		cin >> tmp;
		v.push_back(tmp);
	}

	mergeSort(0, n-1);


	for (int i = 0; i < n; i++){
		cout << v[i] << "\n";
	}

	return 0;
}