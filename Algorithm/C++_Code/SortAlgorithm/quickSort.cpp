//
//  quickSort.cpp
//  studyC
//
//  Created by salmon on 2020/07/11.
//  Copyright © 2020 salmon. All rights reserved.
//

#include <stdio.h>

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int *arr,int l, int r){
    int pivot = r;
    // 맨 오른쪽을 pivot으로 잡음
    int i= l-1;
    
    for(int j=l; j<=r-1; j++){
        if(arr[j]<arr[pivot]){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);
    
    return i+1;
}


void quickSort(int arr[], int l, int r){
    // 종료조건은 mergesort와 마찬가지로 l<r이다
    if(l<r){
        // 실제 정렬이 이뤄나는 partition 부분
        // 분할 정복이 이뤄진다.
        int p = partition(arr,l,r);
        
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}

int main(){
    
    int n = 10;
    int arr[10] = {10,6,7,5,3,3,1,9,4,2};
    
    // 퀵소트 진행
    // n 이 아닌 n-1 을 넣는거 주의
    // 여기서는 맨 오른쪽 값을 pivot으로 잡는다.
    quickSort(arr,0,n-1);
    
    // 시간 복잡도
    // worst : O(n^2)
    // => 정렬이 이미 이루어져있을때, pivot을 맨 앞 혹은 맨 뒤로 잡게되면
    //    재귀함수의 깊이도 가장 깊어지며, worst case가 되게 된다.
    //.   r이 n-1, n-2, n-3... 되어 다 해보게됨
    // avaerage : O(nlogn)
    // best : O(nlogn)
    
    for(int i=0; i<n;i++){
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}
