

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int n;
	cin >> n;
	vector<int> pl;
	vector<int> mn;
	int zero = 0;
	int first = 0;

	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		if (tmp == 1){
			first += 1;
		}
		else if (tmp == 0){
			zero += 1;
		} else if (tmp > 0){
			pl.push_back(tmp);
		}
		else{
			mn.push_back(tmp);
		}
	}

	sort(pl.begin(), pl.end());
	reverse(pl.begin(),pl.end());
	sort(mn.begin(), mn.end());

	if (pl.size() % 2 != 0){
		pl.push_back(1);
	}

	if (mn.size() % 2 != 0){
		mn.push_back(zero != 0 ? 0 : 1);
	}

	int ans = first;

	for (int i = 0; i < pl.size() ; i +=2){
		ans += pl[i] * pl[i + 1];
	}

	for (int i = 0; i < mn.size(); i +=2){
		ans += mn[i] * mn[i + 1];
	}


	cout << ans << '\n';

	return 0;
}