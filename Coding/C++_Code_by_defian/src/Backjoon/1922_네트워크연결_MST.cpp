
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<pair<int, pair<int, int>>> com;
int parent[1001] = { 0, };

int ans = 0;


int find(int a){
	if (parent[a] == a){
		return a;
	}
	
	return parent[a] = find(parent[a]);
}

void makeset(){
	for (int i = 0; i < n; i++){
		parent[i] = i;
	}
}

int main(){

	scanf("%d", &n);
	scanf("%d", &m);
	
	for (int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		com.push_back(make_pair(c, make_pair(a,b)));
	}

	makeset();

	sort(com.begin(), com.end());

	for (int i = 0; i < com.size(); i++){
		int w = com[i].first;
		int st1 = com[i].second.first;
		int st2 = com[i].second.second;

		if (find(st1) == find(st2)){
			continue;
		}
		else {
			ans += w;
			if (find(st1) < find(st2)){
				parent[find(st1)] = find(st2);
			}
			else {
				parent[find(st2)] = find(st1);
			}
		}

	}

	printf("%d", ans);

	return 0;
}