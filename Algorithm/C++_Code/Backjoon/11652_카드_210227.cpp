

#include <iostream>
#include <algorithm>
using namespace std;

int n;


int main(){

	cin >> n;
	long long arr[100001];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr, arr + n);
	
	long long ans = arr[0];
	int cnt = 1;
	int tmp = 1;

	for (int i = 1; i < n; i++){
		if (arr[i] == arr[i - 1]){
			tmp += 1;
		}
		else{
			tmp = 1;
		}

		if (cnt < tmp) {
			cnt = tmp;
			ans = arr[i];
		}
	}

	cout << ans << '\n';

	return 0;
}