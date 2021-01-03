
#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[14];

void dp(vector<int> a, int start, int cnt){
	if (cnt == 6){
		for (int i = 0; i < 6; i++){
			cout << a[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = start; i < n; i++){
		a.push_back(arr[i]);
		dp(a, i + 1, cnt + 1);
		a.pop_back();
	}
}

int main(){
	
	while (true){
		cin >> n;
		if (n == 0) break;
		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}

		vector<int> a;
		dp(a,0,0);

		cout << '\n';
	}

	return 0;
}