

#include <stdio.h>
#include <vector>
using namespace std;
vector<int> v[1001] ;

int arr[1001][3] = { 0, };
int n;
int ans = 1000010;

void bf(int cnt, int check, int hap){
	if (cnt == n){
		if (hap < ans){
			ans = hap;
		}
		return;
	}
	for (int i = 0; i < 3; i++){
		if (i != check){
			bf(cnt + 1, i, hap + arr[cnt+1][i]);
		}
	}
}


int main(){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
	}
	
	for (int i = 0; i < 3; i++){
		bf(1, i, arr[1][i]);
	}

	printf("%d", ans);
	

	return 0;
}