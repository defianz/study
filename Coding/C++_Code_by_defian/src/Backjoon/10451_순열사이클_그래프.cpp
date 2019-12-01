/*
 * 10451_순열사이클_그래프.cpp
 *
 *  Created on: 2019. 7. 31.
 *      Author: iautm
 */

#include <stdio.h>
#include <vector>
using namespace std;

vector<int> d10451[1001];
bool check10451[1001];
int cnt10451;

void dfs10451(int node){
	check10451[node] = true;
	int next = d10451[node][0];
	if (check10451[next] == false) {
		dfs10451(next);
	} else {
		cnt10451 += 1;
	}

}

int main10451(){

	int testcase;
	scanf("%d",&testcase);

	while (testcase --){
		cnt10451 =0;
		int V,E;
		scanf("%d",&V);
		E = V;

		for(int i=1; i<=V; i++){
			d10451[i].clear();
			check10451[i] = false;
		}

		for (int i=1; i<=V; i++){
			int a;
			scanf("%d",&a);
			d10451[i].push_back(a);
		}

		for (int i=1; i<=V; i++){
			if(check10451[i] == false)
			dfs10451(i);
		}

		printf("%d\n",cnt10451);

	}


	return 0;
}


