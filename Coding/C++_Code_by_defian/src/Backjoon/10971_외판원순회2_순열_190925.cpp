

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;



int n;
int w[10][10];
vector<int> v;
int sol= 10000001;

int main(){

	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &w[i][j]);
		}
	}
	for (int i = 0; i < n; i++){
		v.push_back(i);
	}

	do{
		int sum = 0;
		bool ok = true;
		for (int i = 0; i < n-1; i++){
			int tmp = w[v[i]][v[i + 1]];
			if (tmp == 0) ok = false;
			else sum += tmp;
		}
		if (ok == true && w[v[n - 1]][v[0]] != 0) {
			sum += w[v[n - 1]][v[0]];
			if (sol > sum) sol = sum;
		}
	} while (next_permutation(v.begin(), v.end()));
	

	printf("%d", sol);


	return 0;
}