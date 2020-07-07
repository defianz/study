

#include <stdio.h>
#include <vector>
using namespace std;
int blackmax=0,n,m;
int input[101];

void blackjack(int sum, bool check[101], int count){
	if (count == 3){
		//printf("sum은 이거입니다 : %d\n", sum);
		if (sum <= m && sum >blackmax){
			blackmax = sum;
		}
		return;
	}
	for (int i = 0; i < n; i++){
		if (check[i] == false){
			check[i] = true;
			sum += input[i];
			count++;
			//printf("i는 뭘까요 %d\n", input[i]);
			blackjack(sum, check, count);
			count--;
			sum -= input[i];
			check[i] = false;
		}
	}

}

int main(){

	
	scanf("%d %d", &n, &m);
	
	bool check[101] = { false, };

	for (int i = 0; i < n; i++){
		scanf("%d", &input[i]);
	}

	blackjack(0, check, 0);
	
	printf("%d", blackmax);
	return 0;
}