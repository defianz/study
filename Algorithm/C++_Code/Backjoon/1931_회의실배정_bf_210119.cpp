
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;
vector<pair<int, int> > v;
int ans = 0;
vector<pair<int, int> > check;

void sol(int index, vector<pair<int,int> > &check){

	if (index == n){
		//for (int i = 0; i < check.size(); i++){
		//	cout << check[i].first << " " << check[i].second << " || ";
		//}
		//cout << '\n';

		int tmp = check.size();
		ans = max(tmp, ans);
		return;
	}


	if (check.size() == 0){
		check.push_back(v[index]);
		sol(index + 1, check);
		check.pop_back();
	}
	else {
		if (v[index].first >= check[check.size() - 1].second){
			check.push_back(v[index]);
			sol(index + 1, check);
			check.pop_back();
		}
		sol(index + 1, check);
	}
}

int main(){
	cin >> n;
	
	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		v.push_back(make_pair(tmp1, tmp2));
	}

	
	check.push_back(v[0]);
	sol(1,check);
	check.pop_back();
	sol(1, check);

	cout << ans << '\n';

	return 0;
}