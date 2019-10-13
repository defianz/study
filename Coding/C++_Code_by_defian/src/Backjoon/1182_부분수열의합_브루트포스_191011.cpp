




#include <stdio.h>
#include <algorithm>
using namespace std;

int n, s;
int cnt=0;
int d[21];

void bp(int index, int hap){
	hap += d[index];
	if (index == n){
		return;
	}
	if (hap == s) cnt++;

	bp(index + 1, hap);
	bp(index + 1, hap - d[index]);
	
}


int main(){
	
	scanf("%d %d", &n, &s);
	for (int i = 0; i < n; i++){
		scanf("%d", &d[i]);
	}

	bp(0, 0);
	

	printf("%d", cnt);

	return 0;
}