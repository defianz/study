/*
 * 11724_연결요소_그래프.cpp
 *
 *  Created on: 2019. 7. 30.
 *      Author: iautm
 */

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;


int n11724,m11724,cnt;
vector<int> d11724[1001];
bool check11724[1001];

void dfs11724(int node){
	check11724[node] = true;
	for (int i=0; i<d11724[node].size(); i++){
		int next = d11724[node][i];
		if(check11724[next] == false){
			dfs11724(next);
		}
	}
}

int main11724(){



	scanf("%d %d",&n11724,&m11724);

	for(int i=0; i<m11724; i++){
		int fr,to;
		scanf("%d %d",&fr, &to);
		d11724[fr].push_back(to); d11724[to].push_back(fr);
	}

	for (int i=1; i<=n11724; i++){
		sort(d11724[i].begin(),d11724[i].end());
	}

	cnt =0;
	for (int i=1; i<=n11724; i++){
		if(check11724[i]== false){
			dfs11724(i);
			cnt++;
		}
	}

	printf("%d",cnt);
	return 0;
}



