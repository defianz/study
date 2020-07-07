


#include <stdio.h>
#include <vector>
#include <cstring>
using namespace std;

int k, n, m;
vector<int> v[20001];
int visited[20001] = { 0, };
bool ans = true;

void dfs(int index,int flag){
	visited[index] = flag;
	int nextflag;
	if (flag == 1) nextflag = 2;
	if (flag == 2) nextflag = 1;
	for (int i = 0; i < v[index].size(); i++){
		if (visited[v[index][i]] != 0 && visited[v[index][i]] != nextflag){
			ans = false;
		} else if (visited[v[index][i]] == 0){
			dfs(v[index][i], nextflag);
		}
	}
}

int main(){
	scanf("%d", &k);

	while (k--){
		v.asign(100, 0);
		fill(visited, visited + 20001, 0);
		ans = true;
		scanf("%d %d", &n, &m);
		for (int i = 0; i < m; i++){
			int tmp1, tmp2;
			scanf("%d %d", &tmp1, &tmp2);
			v[tmp1].push_back(tmp2);
			v[tmp2].push_back(tmp1);
		}

		for (int i = 1; i <= n; i++){
			if (visited[i] != 0) continue;
			dfs(i,1);
		}

		if (ans == true) printf("YES\n");
		if (ans == false) printf("NO\n");
	}



	return 0;
}