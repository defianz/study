

#include <iostream>
#include <vector>
using namespace std;


void swap(int *a, int *b){
	int tmp = *b;
	*b = *a;
	*a = tmp;
}

int main(){

	int n,tmp;
	vector<int> v;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> tmp;
		v.push_back(tmp);
	}


	for (int i = 0; i < n-1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (v[j] > v[j + 1])
				swap(&v[j], &v[j + 1]);
		}
	}


	for (int i = 0; i < n; i++){
		cout << v.at(i) << "\n";
	}
	cout << '\n';
	
	return 0;
}