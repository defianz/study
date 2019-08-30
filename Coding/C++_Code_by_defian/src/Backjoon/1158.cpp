/*
 * 1158.cpp
 *
 *  Created on: 2019. 7. 8.
 *      Author: iautm
 */

#include <stdio.h>
#include <queue>
using namespace std;

int main1158(){

	int N,K;

	scanf("%d %d",&N,&K);
	queue<int> que;

	for(int i=0; i<N; i++){
		que.push(i+1);
	}

	printf("<");
	for(int i=1; i<N*K+1; i++){
		if (i % K == 0) {
			if (i == N * K) {
				printf("%d>", que.front());
				que.pop();
				break;
			}
			printf("%d, ",que.front());
			que.pop();
			continue;
		}
		que.push(que.front());
		que.pop();
	}

	return 0;
}


