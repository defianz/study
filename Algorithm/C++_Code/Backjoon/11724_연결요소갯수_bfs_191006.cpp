

#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;


int main(){
	int n, m;
	int cnt = 0;
	
	vector<int> v[1001];
	bool visited[1001] = { false, };

	scanf("%d %d", &n, &m);

	for (int i = 0; i < m; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		v[tmp1].push_back(tmp2);
		v[tmp2].push_back(tmp1);
	}
	
	
	queue<int> q;

	for (int i = 1; i <= n; i++){
		if (visited[i] == true) continue;
		cnt++;
		q.push(i);
		while (!q.empty()){
			int nx = q.front();
			visited[nx] = true;
			q.pop();
			for (int j = 0; j < v[nx].size(); j++){
				if (visited[v[nx][j]] == false){
					q.push(v[nx][j]);
				}
			}
		}

	}
	printf("%d", cnt);


	return 0;
}