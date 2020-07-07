

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int n;
	vector<int> v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	if (next_permutation(v.begin(), v.end())){
		for (int i = 0; i < n; i++){
			printf("%d ", v[i]);
		}
	}
	else {
		printf("-1");
	}

	

	return 0;
}