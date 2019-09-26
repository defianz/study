

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n, m;
vector<int> v;
vector<int> check;

void dp(int start, int count){
	if (count == m){
		for (auto a : check){
			cout << a << " ";
		}
		cout << "\n";
		return;
	}
	bool selected[10001] = { false, };
	for (int i = start; i < n; i++){
		if (selected[v[i]] == false){
			selected[v[i]] = true;
			check.push_back(v[i]);
			dp(i, count + 1);
			check.pop_back();
		}
	}

}

int main(){
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	dp(0,0);

	return 0;
}