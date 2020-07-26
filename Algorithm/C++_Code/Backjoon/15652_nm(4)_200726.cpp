//
//  15652_nm(4)_200726.cpp
//  studyC
//
//  Created by salmon on 2020/07/26.
//  Copyright © 2020 salmon. All rights reserved.
//


//문제
//자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//
//1부터 N까지 자연수 중에서 M개를 고른 수열
//같은 수를 여러 번 골라도 된다.
//고른 수열은 비내림차순이어야 한다.
//길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK-1 ≤ AK를 만족하면, 비내림차순이라고 한다.
//
//입력
//첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)


#include <stdio.h>
int n,m;
int arr[9]={0,};


void bp(int cnt, int st){
    if(cnt == m){
        for(int i=0; i<m; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    
    for(int i=st; i<=n; i++){
        arr[cnt] = i;
        bp(cnt+1, i);
    }
}



int main(){
    
    scanf("%d %d",&n,&m);
    
    
    bp(0,1);
    
    
    return 0;
}
