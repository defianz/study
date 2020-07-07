



#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int n, ans;
vector<pair<int, int>> v[16];

void dfs(int day, int hap){

	if (day >= n+1){
		ans = max(ans, hap);
		return;
	}
	dfs(day + 1, hap);
	if (day + v[day][0].first <= n+1){
		dfs(day + v[day][0].first, hap + v[day][0].second);
	}
}


int main(){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		v[i].push_back(make_pair(tmp1, tmp2));
	}

	dfs(1,0);


	printf("%d", ans);
	return 0;
}