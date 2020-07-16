//
//  15649_n과m(1).cpp
//  studyC
//
//  Created by salmon on 2020/07/13.
//  Copyright © 2020 salmon. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

int n,m;
bool arr[9] ={false,};
vector<int> v;

void dfs (int cnt){
    if(cnt == m){
        for(int i=0;i<v.size();i++){
            printf("%d ",v[i]);
        }
        printf("\n");
    }
    
    for(int i=1; i<=n; i++){
        if(arr[i] == false){
        arr[i] = true;
        v.push_back(i);
        dfs(cnt+1);
        arr[i] = false;
        v.pop_back();
        }
    }
}

int main(){
    
   
    scanf("%d %d",&n,&m);
    
    dfs(0);
    
    return 0;
}
