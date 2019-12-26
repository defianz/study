

#include <stdio.h>
#include <vector>
using namespace std;

int n, m;
vector<int> sol;



int main(){
	scanf("%d %d", &n, &m);
	sol.resize(n);
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		sol.push_back(tmp);
	}



	return 0;
}