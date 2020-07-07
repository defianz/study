


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v[2001];
bool check[2001] = { false, };
bool ans;

void dp(int count,int start){
	if (count == 5){
		ans = true;
		return;
	}
	for (int i = 0; i < v[start].size(); i++){
		if (ans == true) return;
		if (check[v[start][i]] == false){
			check[v[start][i]] = true;
			dp(count + 1, v[start][i]);
			check[v[start][i]] = false;
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		v[tmp1].push_back(tmp2);
		v[tmp2].push_back(tmp1);
	}
	for (int i = 0; i < n; i++){
		sort(v[i].begin(), v[i].end());
	}

	for (int i = 0; i < n; i++){
	check[i] = true;
	dp(1, i);
	check[i] = false;
	}	

	if (ans == true) {
		printf("1");
	}
	else {
		printf("0");
	}


	return 0;
}