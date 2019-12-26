

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> v;

	for (int i = 1; i <= n; i++){
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	int ans1 = v[0];
	int ans2 = v[0];

	for (int i = 1; i < n; i++){
		ans1 = max(ans1, v[i]);
		ans2 = min(ans2, v[i]);
	}
	printf("%d %d", ans2, ans1);
	return 0;
}