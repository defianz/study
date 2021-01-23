

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int lday=0;


struct day {
	int p, d;
};

bool cmp(day &a, day &b){
	if (a.d == b.d){
		return a.p > b.p;
	}
	else {
		return a.d > b.d;
	}
}

int main(){
	cin >> n;
	vector<day > a;
	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		day tmp;
		tmp.p = tmp1;
		tmp.d = tmp2;
		a.push_back(tmp);
		if (tmp2 > lday) lday = tmp2;
	}

	for (int i = 1; i <= lday; i++){
		day tmp;
		tmp.p = 0;
		tmp.d = i;
		a.push_back(tmp);
	}

	sort(a.begin(), a.end(), cmp);


	//for (int i = 0; i < a.size(); i++){
	//	cout << a[i].d << " " << a[i].p << '\n';
	//}

	long long ans = 0;
	priority_queue<int> q;
	for (auto &p : a){
		if (p.p != 0){
			q.push(p.p);
		}
		else {
			if (!q.empty()){
			ans += q.top();
			q.pop();

			}
		}
	}

	cout << ans << '\n';
	return 0;
}