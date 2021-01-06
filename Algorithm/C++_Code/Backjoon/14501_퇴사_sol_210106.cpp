//
//  14501_퇴사_sol_210106.cpp
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
int ans =0;

void go(int day, int hap){
    if(day == n+1){
        ans = max (ans,hap);
        return;
    }
    if( day > n+1){
        return;
    }
    
    go(day+1,hap);
    go(day+t[day],hap+p[day]);
    return;
}

int main(){
    
    cin >> n;
    for(int i=1;i<=n; i++){
        cin >> t[i] >> p[i];
    };
    
    go(1,0);
    
    cout << ans << '\n';
    
    
    return 0;
}
