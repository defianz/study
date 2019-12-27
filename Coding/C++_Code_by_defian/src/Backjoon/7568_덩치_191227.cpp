

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main(){

	int n;
	scanf("%d", &n);

	int rank[51] = { 0, };
	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		v.push_back(make_pair(tmp1, tmp2));
	}
	
	for (int i = 0; i < n; i++){
		int res = 1;
		int tmp1 = v[i].first;
		int tmp2 = v[i].second;
		for (int i = 0; i < n; i++){
			if (v[i].first > tmp1 && v[i].second > tmp2){
				res += 1;
			}
		}
		rank[i] = res;
	}

	for (int i = 0; i < n; i++){
		printf("%d ", rank[i]);
	}

	return 0;
}