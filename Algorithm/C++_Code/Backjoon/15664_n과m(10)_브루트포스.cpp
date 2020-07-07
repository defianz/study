


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int a[10001];
int check[10001];
bool visited[10001] = { false, };

void dp(int start,int count){
	if (count == m){
		for (int i = 0; i < m; i++){
			printf("%d ", check[i]);
		}
		printf("\n");
		return;
	}
	bool selected[10001] = { false, };
	for (int i = start; i < n; i++){
		if (selected[a[i]] == false && visited[i] == false){
			visited[i] = true;
			selected[a[i]] = true;
			check[count] = a[i];
			//printf("check[count]ดย %d \n", check[count]);
			dp(i+1,count + 1);
			visited[i] = false;
		}
	}


}

int main(){
	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	sort(a, a + n);

	dp(0,0);

	return 0;
}