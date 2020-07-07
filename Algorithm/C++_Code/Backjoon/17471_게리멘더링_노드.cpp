


#include <stdio.h>
#include <vector>
using namespace std;

int n;
int ptr[11];
vector<int> v[11];

int main(){

	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &ptr[i]);
	}

	for (int i = 1; i <= n; i++){
		int tmp;
		scanf("%d", &tmp);
		for (int j = 0; j < tmp; j++){
			int tmp2;
			scanf("%d", &tmp2);
			v[i].push_back(tmp2);
		}
	}

	for (int i = 1; i <= n; i++){

	}
	

	return 0;
}