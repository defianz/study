

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	string n;
	cin >> n;
	
	vector<char> v;

	int hap = 0;
	bool flag = false;
	for (int i = 0; i < n.size(); i++){
		hap += n[i] - '0';
		v.push_back(n[i]);
		if (n[i] - '0' == 0) flag = true;
		
	}

	if (flag == false) {
		cout << -1 << '\n';
		return 0;
	}

	if (hap % 3 != 0) {
		cout << -1 << '\n';
		return 0;
	}

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	string ans;
	for (int i = 0; i < v.size(); i++){
		ans += v[i];
	}

	cout << ans << '\n';
	

	return 0;
}