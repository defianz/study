#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n, k;
vector<int> v;
int cnt;

int main(){
	cin >> n >> k;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	for (int i = n - 1; i >= 0; i--){
		while (k - v[i] >= 0){
				k -= v[i];
				cnt++;
		}
	}

	cout << cnt << '\n';

	return 0;
}