/*
 * 1707_이분그래프_그래프.cpp
 *
 *  Created on: 2019. 7. 31.
 *      Author: iautm
 */




#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


vector<int> d1707[20001];
int color1707[20001]={0,};


void dfs(int node, int c){
	color1707[node] = c;
	for (int i=0; i<d1707[node].size(); i++){
		int next = d1707[node][i];
		if(color1707[next] == 0){
			dfs(next,3-c);
		}
	}
}

int main1707(){

	int testcase;
	scanf("%d", &testcase);

	while (testcase--) {

		int V, E;
		scanf("%d %d", &V, &E);

		for(int i=1; i<=V; i++){
			d1707[i].clear();
			color1707[i] = 0;
		}


		for (int i = 1; i <= E; i++) {
			int a, b;
			scanf("%d %d", &a, &b);
			d1707[a].push_back(b);
			d1707[b].push_back(a);
		}

		for (int i=1; i<=V; i++){
			sort(d1707[i].begin(),d1707[i].end());
		}

		for (int i=1; i<=V; i++){
			if(color1707[i] ==0)
				dfs(i,1);
		}

		bool ok = true;
		for (int i = 1; i <= V; i++) {
			for (int j = 0; j < d1707[i].size(); j++) {
				int k = d1707[i][j];
				if (color1707[i] == color1707[k]) {
					ok = false;
				}
			}

		}
		if(ok == true){
			printf("YES\n");
		} else {
			printf("NO\n");
		}

	}

	return 0;
}



