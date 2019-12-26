

#include <stdio.h>


int main(){
	int arr[9];
	for (int i = 1; i <= 8; i++){
		scanf("%d", &arr[i]);
	}
	int flag;
	if (arr[2] > arr[1]) { flag = 0; }
	else{ flag = 1; }


	for (int i = 3; i <= 8; i++){
		if (arr[i - 1] < arr[i]){
			if (flag == 0){
				continue;
			}
			else {
				flag = 2; 
				break;
			}
		}
		else if (arr[i - 1] > arr[i]){
			if (flag == 1){
				continue;
			}
			else{
				flag = 2;
				break;
			}
		}
	}

	if (flag == 0){
		printf("ascending");
	}
	else if (flag == 1){
		printf("descending");
	}
	else {
		printf("mixed");
	}


	return 0;
}