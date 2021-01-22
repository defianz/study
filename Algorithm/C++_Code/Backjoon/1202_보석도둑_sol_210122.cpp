

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


bool cmp(pair<int, int>  &q, pair<int, int> &a){
	return q.second > a.second;
}

int main(){
	int n, k;
	
	cin >> n >> k;
	vector<pair<int, int> > a(n);

	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		a.push_back(make_pair(tmp1, tmp2));
	}

	sort(a.begin(), a.end(), cmp);


	//for (int i = 0; i < n; i++){
	//	cout << a[i].first << '\n';
	//}

	multiset<int> s;

	for (int i = 0; i < k; i++){
		int tmp;
		cin >> tmp;
		s.insert(tmp);
	}

	long long ans = 0;
	for (int i = 0; i < n; i++){
		auto it = s.lower_bound(a[i].first);
		if (it != s.end()){
			ans += a[i].second;
			s.erase(it);
		}
	}

	cout << ans << '\n';

	return 0;
}