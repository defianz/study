//문제
//수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.
//
//예를 들어, 수열 A = { 10, 20, 10, 30, 20, 50 } 인 경우에 가장 긴 증가하는 부분 수열은 A = { 10, 20, 10, 30, 20, 50 } 이고, 길이는 4이다.
//
//입력
//첫째 줄에 수열 A의 크기 N(1 ≤ N ≤ 1, 000)이 주어진다.
//
//둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ Ai ≤ 1, 000)
//
//출력
//첫째 줄에 수열 A의 가장 긴 증가하는 부분 수열의 길이를 출력한다.

#include <stdio.h>
int n;
int arr[1001] = { 0, };
int dp[1001] = { 0, };
int ans = 0;
int main(){
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){ scanf("%d", &arr[i]); };

	dp[0] = 1;
	ans = 1;
	for (int i = 1; i < n; i++){
		dp[i] = 1;
		for (int j = 0; j < i; j++){
			if (arr[j] < arr[i] && dp[j] + 1 > dp[i]){
				dp[i] = dp[j] + 1;
				
			}
		}
		if (dp[i] > ans) ans = dp[i];
	}

	printf("%d", ans);


	return 0;
}