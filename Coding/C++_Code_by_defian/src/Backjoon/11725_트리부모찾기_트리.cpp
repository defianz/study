/*
 * 11725_트리부모찾기_트리.cpp
 *
 *  Created on: 2019. 8. 1.
 *      Author: iautm
 */

#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int main11725(){

	int n;
	scanf("%d",&n);

	vector<int> a[n+1];
	int depth[n+1]={0,};
	bool check[n+1]={false,};
	int parent[n+1]={0,};

	for (int i=0; i<n-1; i++){
		int u,v;
		scanf("%d %d",&u,&v);
		a[u].push_back(v);
		a[v].push_back(u);
	}

	queue<int> q;
	depth[1] =0; check[1] = true;  parent[1] =0; q.push(1);
	while(!q.empty()){
		int x = q.front(); q.pop();
		for(int y : a[x]){
			if(check[y] == false){
				depth[y] = depth[x] +1;
				parent[y] = x;
				check[y] = true;
				q.push(y);
			}
		}
	}

	for(int i=2; i<=n; i++){
		printf("%d\n",parent[i]);
	}


	return 0;
}

