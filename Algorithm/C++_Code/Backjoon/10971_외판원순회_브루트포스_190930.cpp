


#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int w[11][11] = { 0, };
vector<int> v;
int solmin = 10000001;

int main(){
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &w[i][j]);
		}
		v.push_back(i);
	}

	do{
		int sum = 0;
		bool ok = false;
		for (int i = 0; i < n-1; i++){
			sum += w[v[i]][v[i + 1]];
			if (w[v[i]][v[i + 1]]==0) ok = true;
		}
		if (w[v[n - 1]][v[0]] == 0) ok = true;
		sum += w[v[n-1]][v[0]];
		if (solmin>sum && ok == false) solmin = sum;
	} while (next_permutation(v.begin(), v.end()));

	printf("%d", solmin);

	return 0;
}