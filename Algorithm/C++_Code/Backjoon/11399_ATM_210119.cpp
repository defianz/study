

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	int ans = 0;
	for (int i = 0; i < n; i++){
		ans = ans + v[i] * (n - i);
	}
	cout << ans << '\n';
}