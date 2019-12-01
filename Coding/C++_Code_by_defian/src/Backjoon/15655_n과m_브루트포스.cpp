 


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
vector<int> check;
bool visited[10001] = { false, };

void dp(int start,int count){
	if (count == m){
		for (auto i : check){
			printf("%d ", i);
			}
		printf("\n");
		return;
		}
		
	for (int i = start; i < n; i++){
		if (visited[i] == false){
			visited[i] = true;
			check.push_back(v[i]);
			dp(i, count + 1);
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

	dp(0,0);


	return 0;
}