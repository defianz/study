//
//  1003_피보나치함수_topdown_200801.cpp
//  studyC
//
//  Created by salmon on 2020/08/01.
//  Copyright © 2020 salmon. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

bool check[41]={false,};
pair<int,int> arr[41];


pair<int,int> fibo(int n){
    if(check[n]){
        return arr[n];
    } else {
        check[n] = true;
        arr[n] = make_pair(fibo(n-1).first+fibo(n-2).first, fibo(n-1).second+fibo(n-2).second);
        return arr[n];
    }
}


int main(){
    int t,n;
    scanf("%d",&t);
    check[0] = true;
    check[1] = true;
    arr[0]={1,0};
    arr[1]={0,1};
    
    while(t--){
        scanf("%d",&n);
        pair<int,int> ans = fibo(n);
        printf("%d %d\n",ans.first,ans.second);
    }
    
    return 0;
}
