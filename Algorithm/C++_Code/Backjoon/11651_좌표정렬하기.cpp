

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


bool comp(const pair<int, int> &a, const pair<int, int> &b){
	if (a.second > b.second){
		return false;
	}
	else if (a.second == b.second){
		return a.first < b.first;
	}
	else {
		return true;
	}
}

int main(){

	int n,inp1,inp2;
	vector<pair<int, int> > v;
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d %d", &inp1, &inp2);
		v.push_back(make_pair(inp1, inp2));
	}

	sort(v.begin(), v.end(), comp);


	for (int i = 0; i < n; i++){
		printf("%d %d\n", v[i].first, v[i].second);
	}

	return 0;
}