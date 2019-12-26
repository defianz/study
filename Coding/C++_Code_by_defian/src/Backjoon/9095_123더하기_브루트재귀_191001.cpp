


#include <stdio.h>
int testcase,n,ans;
int visited[12] = { 0, };

int djp(int a){
	if (a == 1){
		return 1;
	}
	else if (a == 2){
		return 2;
	}
	else if (a == 0){
		return 1;
	}
	if (visited[a] != 0){
		return visited[a];
	}
	else {

		int tmp = djp(a - 1) + djp(a - 2) + djp(a - 3);
		visited[a] = tmp;
		return tmp;
	}

	
}


int main(){
	
	scanf("%d", &testcase);

	while (testcase--){
		scanf("%d", &n);
		printf("%d\n",djp(n));
	}


	return 0;
}