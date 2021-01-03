

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int min_sol = 1000000001;
int max_sol = -1000000001;


int calc(vector<int> &a, vector<int> &b){
	int tmp = a[0];
	for (int i = 1; i < n; i++){
		if (b[i - 1] == 0) tmp += a[i];
		else if (b[i - 1] == 1) tmp -= a[i];
		else if (b[i - 1] == 2) tmp *= a[i];
		else tmp /= a[i];
	}

	return tmp;
}

int main(){

	cin >> n;
	vector<int> a(n);
	vector<int> b;

	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < 4; i++){
		int cnt = 0;
		cin >> cnt;
		for (int j = 0; j < cnt; j++){
			b.push_back(i);
		}
	}
	sort(b.begin(), b.end());
	vector<int> results;
	do{
		int result = calc(a, b);
		results.push_back(result);
	} while (next_permutation(b.begin(), b.end()));
	
	auto ans = minmax_element(results.begin(), results.end());

	cout << *ans.second << '\n' << *ans.first << '\n';

	return 0;
}