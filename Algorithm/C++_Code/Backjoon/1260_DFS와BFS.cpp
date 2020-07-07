




#include <stdio.h>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;

int n, m, v;
vector<int> d[1001];
bool visited[1001] = { false, };
queue<int> q;

void dfs(int tmp){
	visited[tmp] = true;
	printf("%d ", tmp);
	for (int i = 0; i<d[tmp].size(); i++){
		int next = d[tmp][i];
		if (visited[next] == false){
			dfs(next);
		}
	}

}

void bfs(int start){
	queue<int> q;
	memset(visited, false, sizeof(visited));
	visited[start] = true;
	q.push(start);

	while (!q.empty()){
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = 0; i<d[node].size(); i++){
			int next = d[node][i];
			if (visited[next] == false){
				visited[next] = true;
				q.push(next);
			}
		}
	}
}


int main(){

	scanf("%d %d %d", &n, &m, &v);

	for (int i = 0; i < m; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		d[tmp1].push_back(tmp2);
		d[tmp2].push_back(tmp1);
	}
	for (int i = 0; i < n; i++){
		sort(d[i].begin(), d[i].end());
	}


	dfs(v);

	printf("\n");
	fill(visited, visited + 1001, false);

	bfs(v);
	

	return 0;
}
