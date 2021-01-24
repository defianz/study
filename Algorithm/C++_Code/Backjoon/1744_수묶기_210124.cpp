

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> pl;
vector<int> mn;
int first = 0;
int zero = 0;

bool cmp(int &a, int &b){
	return a > b;
}

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		if (tmp < 0){
			mn.push_back(tmp);
		}
		else if (tmp > 1){
			pl.push_back(tmp);
		}
		else if (tmp == 0){
			zero += 1;
		}
		else if (tmp == 1){
			first += 1;
		}
	}

	sort(pl.begin(), pl.end(),cmp);
	sort(mn.begin(), mn.end());

	int cnt = 0;
	int tmp = 1;
	int ans = 0;
	for (int i = 0; i < pl.size(); i++){
		tmp *= pl[i];
		cnt += 1;
		if (cnt == 2){
			ans += tmp;
			tmp = 1;
			cnt = 0;
		}
	}
	if (cnt != 0) ans += tmp;
	ans += first;


	cnt = 0;
	tmp = 1;

	for (int i = 0; i < mn.size(); i++){
		tmp *= mn[i];
		cnt += 1;
		if (cnt == 2){
			ans += tmp;
			tmp = 1;
			cnt = 0;
		}
	}

	if (zero == 0 && cnt != 0) ans += tmp;

	cout << ans << '\n';


	return 0;
}