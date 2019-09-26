


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
vector<int> check;
bool visited[10001];

void dp(int count){
	if (count == m){
		for (auto a : check)
			printf("%d ", a);
		printf("\n");
		return;
	}
	bool selected[10001] = { false, };
	for (int i = 0; i < v.size(); i++){
		if (selected[v[i]] == false && visited[i] == false){
			visited[i] = true;
			selected[v[i]] = true;
			check.push_back(v[i]);
			dp(count + 1);
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

	dp(0);



	return 0;
}