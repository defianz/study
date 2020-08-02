

#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int n, m;
int arr[9] = { 0, };
vector<int> ans;
set<vector<int> > tt;
bool visited[9] = { false, };

void nm(int cnt){
	if (cnt == m){
		tt.insert(ans);
		return;
	}

	for (int i = 0; i < n; i++){
		if (!visited[i]){
			ans.push_back(arr[i]);
			visited[i] = true;
			nm(cnt + 1);
			ans.pop_back();
			visited[i] = false;
		}
	}
}

bool comp(int a, int b){
	if (a < b){
		return true;
	}
	else{
		return false;
	}
}

int main(){

	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n,comp);
	nm(0);

	for (auto &z : tt){
		for (int i = 0; i < m; i++){
			cout << z[i] << " ";
		}
		cout << '\n';
	}

	return 0;
}