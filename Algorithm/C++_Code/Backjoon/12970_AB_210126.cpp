

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int n, k;
	cin >> n >> k;

	if (k == 0){
		string tmp;
		while (tmp.size()+1 < n){
			tmp = "B" + tmp;
		}
		cout << tmp+"A" << '\n';
		return 0;
	}

	
	for (int a = 0; a <= n; a++){
		int b = n - a;
		if (a*b < k) continue;

		vector<int> v(b + 1);
		for (int i = 0; i < a; i++){
			int tmp = min(k, b);
			v[tmp] += 1;
			k -= tmp;
		}

		for (int i = b; i >= 0; i--){
			for (int j = 0; j < v[i]; j++){
				cout << 'A';
			}
			if (i > 0){
				cout << 'B';
			}
		}
		cout << '\n';
		return 0;
	}

	cout << -1 << '\n';

	return 0;
}