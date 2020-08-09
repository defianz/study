//문제
//정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 정수 N(1 ≤ N ≤ 10, 000, 000)이 주어진다.
//
//출력
//N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다.


#include <stdio.h>
#include <cmath>
using namespace std;
int N;

int main(){
	scanf("%d", &N);

	while (N != 1){
		for (int i = 2; i <= N; i++){
			if (N%i == 0){
				N /= i;
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}