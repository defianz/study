#include <iostream>
#include <algorithm>
using namespace std;

int n, m, tmp;
int arr[100] = { 0, };

int main() {
	
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		arr[i] = tmp;
	}

	sort(arr, arr + n);

	int a1, a2, a3;
	int sum = 0;
	for (int i = 0; i < n - 2; i++){
		a1 = arr[i];
		if (a1 > m) continue;
		for (int j = i + 1; j < n - 1; j++){
			a2 = arr[j];
			if (a1 + a2 > m) continue;

			for (int k = j + 1; k < n; k++){
				a3 = arr[k];
				if (a1 + a2 + a3 > m) continue;
				else {
					sum = sum > a1 + a2 + a3 ? sum : a1 + a2 + a3;
				}
			}
		}
	}

	cout << sum << "\n";

	return 0;
}