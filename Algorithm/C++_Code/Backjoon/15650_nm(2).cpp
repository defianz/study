//
//  15650_nm(2).cpp
//  studyC
//
//  Created by salmon on 2020/07/19.
//  Copyright © 2020 salmon. All rights reserved.
//

//자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//
//1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
//고른 수열은 오름차순이어야 한다.
//
//첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)

#include <stdio.h>
int n,m;
int arr[8];
bool flag[9];

void fn(int cnt, int start){
    if(cnt == m){
        for(int i=0; i<m; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    for(int i=start; i<=n; i++){
        if(!flag[i]){
            flag[i] = true;
            arr[cnt]=i;
            fn(cnt+1,i+1);
            flag[i] = false;
        }
    }
}

int main(){
   
    
    scanf("%d %d",&n,&m);
    fn(0,1);
    
    return 0;
}
