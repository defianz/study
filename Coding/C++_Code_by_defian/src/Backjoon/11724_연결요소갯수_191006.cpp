


#include <stdio.h>
#include <vector>
using namespace std;

int n, m;
vector<int> v[1001];
bool visited[1001];
int cnt = 0;

void dfs(int index){
	visited[index] = true;
	for (int i = 0; i < v[index].size(); i++){
		if (visited[v[index][i]] == false){
			dfs(v[index][i]);
		}
	}
}

int main(){

	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		v[tmp1].push_back(tmp2);
		v[tmp2].push_back(tmp1);
	}
	for (int i = 1; i <= n; i++){
		if (visited[i] == true) continue;
		dfs(i);
		cnt++;
	}

	printf("%d", cnt);
	return 0;
}