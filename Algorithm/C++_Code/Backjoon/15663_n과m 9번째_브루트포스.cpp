


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
vector<int> check;
bool visited[10001] = { false, };

void bp(int count){
	if (count == m){
		for (int i = 0; i < m; i++){
			printf("%d ", check[i]);
		}
		printf("\n");
		return;
	}
	bool used[100001] = { false, };
	for (int i = 0; i < n; i++){
		if (visited[i] == false && used[v[i]] == false){
			visited[i] = true;
			used[v[i]] = true;
			check.push_back(v[i]);
			bp(count + 1);
			check.pop_back();
			visited[i] = false;
		}
	}
}

int main(){

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}


	sort(v.begin(), v.end());


	bp(0);


	return 0;
}