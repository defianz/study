

#include <stdio.h>
using namespace std;

int n, cnt = 0;
bool col[16];
bool inc[31];
bool dec[31];


void dfs(int rowindex){
	if (rowindex > n){
		cnt++;
		return;
	}
	//else{
		for (int i = 1; i <= n; i++){
			if (!col[i] && !inc[rowindex + i] && !dec[n + (rowindex - i) + 1]){
				col[i] = inc[rowindex + i] = dec[n + (rowindex - i) + 1] = true;
				dfs(rowindex + 1);
				col[i] = inc[rowindex + i] = dec[n + (rowindex - i) + 1] = false;
			}
		}
	//}


}


int main(){

	scanf("%d", &n);

	
	dfs(1);
	
	printf("%d", cnt);
	return 0;
}