//
//  11051_이항계수2_200815.cpp
//  studyC
//
//  Created by salmon on 2020/08/15.
//  Copyright © 2020 salmon. All rights reserved.
//


//문제
//자연수 과 정수 가 주어졌을 때 이항 계수 를 10,007로 나눈 나머지를 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 과 가 주어진다. (1 ≤  ≤ 1,000, 0 ≤  ≤ )
//
//출력
// 를 10,007로 나눈 나머지를 출력한다.
//
//예제 입력 1
//5 2
//예제 출력 1
//10

#include <stdio.h>
int n,k;
int dp[1001][1001]={0,};

int main(){
    scanf("%d %d",&n,&k);
    
    for(int i = 1; i<=n;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                dp[i][j]=1;
            } else {
                dp[i][j] = (dp[i-1][j]+ dp[i-1][j-1]) % 10007;
            }
        }
    }
//    for(int i = 1; i <= n; i++){
//        for(int j = 0; j <= n; j++){
//            if(i == j || j == 0){
//                dp[i][j] = 1;
//            }
//            else
//                dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % 10007;
//        }
//    }
    
    printf("%d",dp[n][k]);
    
    return 0;
}
