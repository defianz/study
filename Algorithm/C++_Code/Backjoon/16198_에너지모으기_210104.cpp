
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int ans = 0;

void bf(vector<int> &a, int hap){
	if (a.size() == 2){
		ans = max(ans, hap);
		return;
	}
	for (int i = 1; i < a.size()-1; i++){
		vector<int> b(a);
		b.erase(b.begin() + i);
		bf(b, hap + a[i - 1] * a[i + 1]);
	}
}

int main(){
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	bf(a,0);

	cout << ans << '\n';

	return 0;
}