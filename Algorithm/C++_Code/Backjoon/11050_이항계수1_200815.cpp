//
//  11050_이항계수1_200815.cpp
//  studyC
//
//  Created by salmon on 2020/08/15.
//  Copyright © 2020 salmon. All rights reserved.
//

//문제
//자연수 과 정수 가 주어졌을 때 이항 계수 를 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 과 가 주어진다. (1 ≤  ≤ 10, 0 ≤  ≤ )
//
//출력
// 를 출력한다.
//
//예제 입력 1
//5 2
//예제 출력 1
//10

#include <stdio.h>
int n,k,ans;
int main(){
    scanf("%d %d",&n,&k);
    int ans = 1;
    for(int i=n-k+1; i<=n; i++){
        ans *= i;
    };
    for(int i=k; i>=1; i--){
        ans /=i;
    }
    printf("%d",ans);
    
    return 0;
}
