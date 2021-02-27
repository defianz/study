

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;


int main(){

	cin >> n;
	vector<pair<int, int> > a(n+1);
	
	for (int i = 1; i <= n; i++){
		cin >> a[i].first;
		a[i].second = i;
	};

	sort(a.begin(), a.end());

	int ans = 0;

	for (int i = 1; i <= n; i++){
		if (a[i].second - i > ans){
			ans = a[i].second - i;
		}
	}

	cout << ans + 1 << '\n';

	return 0;
}