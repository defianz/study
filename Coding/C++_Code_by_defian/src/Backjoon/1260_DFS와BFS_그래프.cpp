/*
 * 1260_DFS와BFS_그래프.cpp
 *
 *  Created on: 2019. 7. 29.
 *      Author: iautm
 */


#include <stdio.h>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;


int n1260,m1260,start1260;
vector<int> a1260[1001];
bool check1260[1001];


void dfs1260(int tmp){
	check1260[tmp] = true;
	printf("%d ",tmp);
	for(int i=0; i<a1260[tmp].size(); i++){
		int next = a1260[tmp][i];
		if(check1260[next] == false){
			dfs1260(next);
		}
	}

}

void bfs1260(int start){
	queue<int> q;
	memset(check1260,false,sizeof(check1260));
	check1260[start] = true;
	q.push(start);

	while(!q.empty()){
		int node = q.front();
		q.pop();
		printf("%d ",node);
		for (int i=0; i<a1260[node].size();i++){
			int next = a1260[node][i];
			if (check1260[next] == false){
				check1260[next] = true;
				q.push(next);
			}
		}
	}
}

int main1260(){

	scanf("%d %d %d",&n1260,&m1260,&start1260);

	for(int i=1; i<=m1260; i++){
		int u,v;
		scanf("%d %d",&u,&v);
		a1260[u].push_back(v);
		a1260[v].push_back(u);
	}

	for (int i = 1; i <= n1260; i++) {
		sort(a1260[i].begin(), a1260[i].end());
	}

	dfs1260(start1260);
	puts("");
	bfs1260(start1260);


	return 0;
}

