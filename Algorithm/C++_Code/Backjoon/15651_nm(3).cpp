//
//  15651_nm(3).cpp
//  studyC
//
//  Created by salmon on 2020/07/19.
//  Copyright © 2020 salmon. All rights reserved.
//

//자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//
//1부터 N까지 자연수 중에서 M개를 고른 수열
//같은 수를 여러 번 골라도 된다.
//첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 7)
//한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
//
//수열은 사전 순으로 증가하는 순서로 출력해야 한다.

#include <stdio.h>
int n,m;
int arr[8];

void fn(int cnt){
    if(cnt == m){
        for(int i=1; i<=m; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++){
        arr[cnt+1]= i;
        fn(cnt+1);
    }
}


int main(){
    

    scanf("%d %d",&n,&m);
    
    fn(0);
    
    return 0;
}
