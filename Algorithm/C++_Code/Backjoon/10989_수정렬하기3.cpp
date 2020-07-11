

#include <stdio.h>
#include <set>
#include <cstring>
using namespace std;


int main(){

	int n, tmp;
	int count[10001];
	set<int> tmp2;
	memset(count, 0, sizeof(count));
	scanf("%d", &n);

	for (int i = 0; i < n; i++){
		scanf("%d", &tmp);
		count[tmp]++;
	}

	
	for (int i = 0; i<10001; i++){
		if (count[i] != 0){
			for (int j = 0; j<count[i]; j++){
				printf("%d\n", i);
			}
		}
	}


	return 0;
}