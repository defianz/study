

#include <stdio.h>


int main(){
	int arr[10] = { 0, };
	for (int i = 1; i <= 9; i++){
		scanf("%d", &arr[i]);
	}
	int tmp = arr[1];
	int num = 1;
	for (int i = 2; i <= 9; i++){
		if (tmp < arr[i]){
			tmp = arr[i];
			num = i;
		}
	}
	printf("%d\n%d", tmp, num);

	return 0;
}