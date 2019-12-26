

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int l, c;
vector<char> v;
vector<int> check;

vector<vector<char>> ans;

int main(){
	cin >> l >> c;
	for (int i = 0; i < c; i++){
		char tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < c - l; i++){
		check.push_back(0);
	}
	for (int i = 0; i < l; i++){
		check.push_back(1);
	}

	do{
		vector<char> seleted;
		for (int i = 0; i < c; i++){
			if (check[i] == 1){
				seleted.push_back(v[i]);
			}
		}
		bool ok = false;
		for (int i = 0; i < c; i++){
			char tmp2 = seleted[i];

		}
		ans.push_back(seleted);
	} while (next_permutation(check.begin(), check.end()));
	sort(ans.begin(), ans.end());

	for (auto const &a : ans){
		for (auto const &b : a){
			cout << b;
		}
		cout << "\n";
	}

	return 0;
}