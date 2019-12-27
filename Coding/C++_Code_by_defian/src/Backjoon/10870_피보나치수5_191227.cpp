

#include <stdio.h>
#include <cstring>

int arr[21] = { -1, };

int foo(int n){
	if (arr[n] != -1){
		return arr[n];
	}
	else{
		return arr[n] = foo(n - 1) + foo(n - 2);
	}
	

}


int main(){
	int n;
	scanf("%d", &n);

	memset(arr, -1, sizeof(arr));
	arr[0] = 0;
	arr[1] = 1;

	int ans = foo(n);
	

	printf("%d", ans);

	return 0;
}