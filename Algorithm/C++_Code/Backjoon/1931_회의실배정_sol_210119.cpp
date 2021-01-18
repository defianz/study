

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting{
	int begin, end;
};

bool cmp(const Meeting &u, const Meeting &v){
	if (u.end == v.end){
		return u.begin < v.begin;
	}
	else {
		return u.end < v.end;
	}
}

int main(){
	int n;
	cin >> n;
	vector<Meeting> v(n);
	for (int i = 0; i < n; i++){
		cin >> v[i].begin >> v[i].end;
	}

	sort(v.begin(), v.end(),cmp);
	int now = 0;
	int ans = 0;
	for (int i = 0; i < v.size(); i++){
		if (now <= v[i].begin){
			now = v[i].end;
			ans += 1;
		}
	}

	cout << ans << '\n';

	return 0;
}