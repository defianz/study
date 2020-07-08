#include <stdio.h>


bool fnc(int a){
	int tmp2 = 0;
	bool flag = false;

	do{
		if (a % 10 == 6) {
			tmp2 += 1;
			if (tmp2 == 3) return true;
		}
		else {
			tmp2 = 0;
		}
		a /= 10;
	} while (a != 0);

	return false;
}

int main(){
	int n, tmp = 0;
	scanf("%d", &n);

	int i = 665;
	while (true){
		i++;
		if (fnc(i)) {
			//printf("%d\n", i);
			tmp += 1;
		}
		if (tmp == n) break;
	}

	printf("%d", i);

	return 0;
}