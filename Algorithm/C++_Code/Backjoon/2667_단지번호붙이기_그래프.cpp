/*
 * 2667_단지번호붙이기_그래프.cpp
 *
 *  Created on: 2019. 7. 31.
 *      Author: iautm
 */

#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;


int n2667,bunzi;
int d2667[26][26];
int a2667[26][26];

int dy2667[4] = {-1,0,1,0};
int dx2667[4] = {0,-1,0,1};


void bfs2667(int a, int b, int bunzi){
	queue<pair<int,int>> q;
	q.push(make_pair(a,b));
	a2667[a][b] = bunzi;

	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;

		q.pop();
		for (int i=0; i<4; i++){
			int nx = x + dx2667[i];
			int ny = y + dy2667[i];

			if(1<=nx && nx<=n2667 && 1 <= ny && ny <=n2667 ){
				if(a2667[nx][ny] == 0 && d2667[nx][ny] ==1){
				q.push(make_pair(nx,ny));
				a2667[nx][ny] = bunzi;
				}
			}
		}

	}
}

int main2667(){
	scanf("%d", &n2667);

	for(int i=1; i<=n2667; i++){
		for(int j=1; j<=n2667; j++){
			scanf("%1d",&d2667[i][j]);
		}
	}

	bunzi =0;
	for(int i=1; i<=n2667; i++){
		for(int j=1; j<=n2667; j++){
			if(d2667[i][j] == 1 && a2667[i][j] == 0)
			bfs2667(i,j,++bunzi);
		}
	}

	printf("%d\n",bunzi);
	int ans[bunzi+1]={0,};
	for (int i=1; i<=n2667; i++){
		for(int j=1; j<=n2667; j++){
			ans[a2667[i][j]] += 1;
		}
	}
	sort(ans+1, ans+bunzi+1);

	for(int i=1; i<=bunzi; i++){
		printf("%d\n",ans[i]);
	}
	return 0;
}



