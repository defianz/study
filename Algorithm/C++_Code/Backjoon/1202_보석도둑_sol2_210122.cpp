


#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct jewel {
	int m, v, w;
};

bool cmp(jewel a, jewel b){
	return a.m < b.m || (a.m == b.m && a.w < b.w);
}

int main(){
	int n, k;
	cin >> n >> k;

	vector<jewel> a(n+k);
	for (int i = 0; i < n; i++){
		cin >> a[i].m >> a[i].v;
	}

	for (int i = 0; i < k; i++){
		cin >> a[i + n].m;
		a[i + n].w = 1;
	}


	sort(a.begin(), a.end(), cmp);


	priority_queue<int> q;
	long long ans = 0;
	for ( auto &p : a){
		if (p.w == 0){
			q.push(p.v);
		}
		else {
			if (!q.empty()){
				ans += (long long)q.top();
				q.pop();
			}
		}
	}

	cout << ans << '\n';


	return 0;
}
