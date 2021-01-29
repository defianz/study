



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int n, m, k;
	cin >> n >> m >> k;

	// mk+1 >= n >= m + k - 1;
	if (!(m*k >= n && m + k - 1 <= n)) {
		cout << -1 << '\n';
		return 0;
	}

	vector<int> v;
	vector<int> g;

	for (int i = 1; i <= n; i++){
		v.push_back(i);
	}

	g.push_back(0);
	g.push_back(k);

	n -= k;
	m -= 1;

	int gs = m == 0 ? 0  : n/m;
	int r = m == 0 ? 0 : n%m;

	for (int i = 0; i < m; i++){
		g.push_back(g.back() + gs + (r>0 ? 1 : 0));
		if (r > 0);
			r -= 1;
	}

	for (int i = 0; i < g.size()-1; i++){
		reverse(v.begin()+g[i],v.begin()+g[i+1]);
	}

	for (int i = 0; i < v.size(); i++){
		cout << v[i] << ' ';
	}
	cout << '\n';


	return 0;
}