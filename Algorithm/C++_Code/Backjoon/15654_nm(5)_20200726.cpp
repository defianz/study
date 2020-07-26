//
//  15654_nm(5)_20200726.cpp
//  studyC
//
//  Created by salmon on 2020/07/26.
//  Copyright © 2020 salmon. All rights reserved.
//

//문제
//N개의 자연수와 자연수 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오. N개의 자연수는 모두 다른 수이다.
//
//N개의 자연수 중에서 M개를 고른 수열

//입력
//첫째 줄에 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
//
//둘째 줄에 N개의 수가 주어진다. 입력으로 주어지는 수는 10,000보다 작거나 같은 자연수이다.
//
//출력
//한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
//
//수열은 사전 순으로 증가하는 순서로 출력해야 한다.

#include <stdio.h>

int n,m;
int arr[9]={0,};
int inp[9]={0,};
bool flag[9] = {false,};

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int inp[],int l, int r){
    int pivot = r;
    int i = l-1;
    
    for(int j=l; j<r; j++){
        if(inp[j] < inp[pivot]){
            swap(&inp[++i],&inp[j]);
        }
    }
    swap(&inp[++i],&inp[r]);
    return i;
}

void quickSort(int inp[],int l, int r){
    if(l<r){
        int p = partition(inp,l,r);
        
        quickSort(inp,l, p-1);
        quickSort(inp,p+1, r);
    }
}


void bp(int cnt){
    if(cnt == m){
        for(int i=0; i<m; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        return;
    }
    
    for(int i=0; i<n; i++){
        if(!flag[i]){
            arr[cnt] = inp[i];
            flag[i] = true;
            bp(cnt+1);
            flag[i] = false;
        }
    }
}

int main(){
    
    scanf("%d %d",&n,&m);
    
    for(int i=0;i<n;i++){
        scanf("%d",&inp[i]);
    }
    
     quickSort(inp,0,n-1);
    
    
    bp(0);
    
    return 0;
}
