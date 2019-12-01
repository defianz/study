


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
int check[10001];
bool visited[10001] = { false, };

void dp(int start,int count){
	if (count == m){
		for (int i = 0; i < m; i++){
			printf("%d ", check[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i < n; i++){
		check[count] = v[i];
		dp(i,count + 1);
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

	dp(0,0);

	return 0;
}
