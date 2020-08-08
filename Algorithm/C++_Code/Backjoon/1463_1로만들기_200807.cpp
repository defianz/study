//
//  1463_1로만들기_200807.cpp
//  studyC
//
//  Created by salmon on 2020/08/07.
//  Copyright © 2020 salmon. All rights reserved.
//
//
//문제
//정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.
//
//X가 3으로 나누어 떨어지면, 3으로 나눈다.
//X가 2로 나누어 떨어지면, 2로 나눈다.
//1을 뺀다.
//정수 N이 주어졌을 때, 위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오.
//
//입력
//첫째 줄에 1보다 크거나 같고, 106보다 작거나 같은 정수 N이 주어진다.
//
//출력
//첫째 줄에 연산을 하는 횟수의 최솟값을 출력한다.


#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int dp[1000001]={0,};

int main(){
   
    scanf("%d",&n);
    
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4; i<=n; i++){
        if(i % 3 != 0){
            if(i % 2 != 0 ){
                dp[i]=dp[i-1]+1;
            } else {
                dp[i]=min(dp[i-1],dp[i/2])+1;
            }
        } else {
            if(i % 2 != 0 ){
                 dp[i]=min(dp[i-1],dp[i/3])+1;
             } else {
                 dp[i]=min(dp[i/3],min(dp[i-1],dp[i/2]))+1;
             }
        }
    }
   
    
    printf("%d",dp[n]);
    return 0;
}
