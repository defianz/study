//
//  14501_퇴사_210106.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/06.
//

#include <iostream>
#include <algorithm>
using namespace std;

int n;
int t[16];
int p[16];
int tmp[16];
int ans =0;

void bf(int index, int hap){
    if(index <= n+1){
        ans = max(ans,hap);
    }
    for(int i=index; i<=n; i++){
        bf(i+t[i],hap+p[i]);
    }
    return;
}

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> t[i] >> p[i];
    }
    
    for(int i=1; i<=n; i++){
        bf(i+t[i],p[i]);
    }
    
    cout << ans << '\n';
    
    return 0;
}
