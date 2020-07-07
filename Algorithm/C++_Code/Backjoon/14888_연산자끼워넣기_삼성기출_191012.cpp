


#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int a[12];
int yun[4];
int minans = 1000000001;
int maxans = -1000000001;

int calc(int hap, int cindex,int index){
	int tmp;
	if (cindex == 0){
		tmp = hap + a[index];
	}
	else if (cindex == 1){
		tmp = hap - a[index];
	}
	else if (cindex == 2){
		tmp = hap * a[index];
	}
	else {
		tmp = hap / a[index];
	}

	return tmp;
}

void bp(int index, int hap){
	if (index == n-1){
		minans = min(minans, hap);
		maxans = max(maxans, hap);
		return;
	}

	for (int i = 0; i < 4; i++){
		if (yun[i] != 0){
			yun[i] -= 1;
			bp(index + 1, calc(hap, i, index + 1));
			yun[i] += 1;
		}
	}


}



int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < 4; i++){
		scanf("%d", &yun[i]);
	}

	bp(0,a[0]);



	printf("%d\n", maxans);
	printf("%d", minans);

	return 0;
}