


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int n, m;
int v[100001];
vector<int> check;


void dp(int count){
	if (count == m){
		for (auto a : check)
			cout << a << " ";
		cout << "\n";
		return;
	}
	bool selected[10001] = { false, };
	for (int i = 0; i < n; i++){
		if (selected[v[i]] == false){
			selected[v[i]] = true;
			check.push_back(v[i]);
			dp(count + 1);
			check.pop_back();
		}
	}

}


int main(){

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v, v + n);

	dp(0);


	return 0;
}