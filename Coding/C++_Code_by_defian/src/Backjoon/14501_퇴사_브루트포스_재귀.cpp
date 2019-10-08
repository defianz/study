
#include <stdio.h>
#include <vector>
using namespace std;


int n;
vector<pair<int, int>> v;
int ans = 0;

void dp(int index, int hap){

	if (index >= n){
		if (hap > ans) ans = hap;
		return;
	}

	for (int i = index; i < n; i++){
		//int nx = index + v[index].first;
		if (i + v[i].first <=n){
			dp(i + v[i].first, hap + v[i].second);
		}
		else {
			dp(i + v[i].first, hap);
		}
	}
	

}


int main() {

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		v.push_back(make_pair(tmp1, tmp2));
	}

	dp(0,0);

	printf("%d", ans);

	return 0;
}