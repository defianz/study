//
//  15655_nm(6)_20200726.cpp
//  studyC
//
//  Created by salmon on 2020/07/26.
//  Copyright © 2020 salmon. All rights reserved.
//

//
//문제
//N개의 자연수와 자연수 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오. N개의 자연수는 모두 다른 수이다.
//
//N개의 자연수 중에서 M개를 고른 수열
//고른 수열은 오름차순이어야 한다.

//입력
//첫째 줄에 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
//
//둘째 줄에 N개의 수가 주어진다. 입력으로 주어지는 수는 10,000보다 작거나 같은 자연수이다.
//

//출력
//한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다. 중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
//
//수열은 사전 순으로 증가하는 순서로 출력해야 한다.



#include <iostream>
using namespace std;

int n,m;
int arr[9] = {0,};
int inp[9] = {0,};

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void bp(int cnt,int st){
    if(cnt == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << '\n';
    }
    for(int i=st; i<n; i++){
        arr[cnt] = inp[i];
        bp(cnt+1,i+1);
    }
}

int main(){
    
    cin >> n >> m;
    
    for(int i=0;i<n; i++){
        cin >> inp[i];
    }
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(inp[j] > inp[j+1]){
                swap(&inp[j],&inp[j+1]);
            }
        }
    }
//    
//    for(int i=0;i<n;i++){
//        cout << inp[i] << " ";
//    }
//    
    bp(0,0);
    
    return 0;
}
