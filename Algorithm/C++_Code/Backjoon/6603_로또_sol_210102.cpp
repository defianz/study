#include <iostream>
#include <vector>
using namespace std;
vector<int> lotto;

void solve(vector<int> &a, int index, int cnt){
	if (cnt == 6){
		for (int num : lotto){
			cout << num << ' ';
		}
		cout << '\n';
		return;
	}
	int n = a.size();
	if (n == index) return;
	lotto.push_back(a[index]);
	solve(a, index + 1, cnt + 1);
	lotto.pop_back();
	solve(a, index + 1, cnt);
}

int main(){

	while (true){
		int n;
		cin >> n;
		if (n == 0) break;
		vector<int> a;
		for (int i = 0; i < n; i++){
			int tmp;
			cin >> tmp;
			a.push_back(tmp);
		}

		solve(a, 0, 0);
		cout << '\n';

	}

	return 0;
}