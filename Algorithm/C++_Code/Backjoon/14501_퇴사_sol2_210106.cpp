//
//  14501_퇴사_sol2_210106.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/06.
//

#include <iostream>
#include <algorithm>
using namespace std;
const int inf = 100000000;
int n;
int t[16];
int p[16];
int d[16];
int ans =0;


int go(int day){
    if(day == n+1 ){
        return 0;
    }
    if (day > n+1){
        return -inf;
    }
    if(d[day] != -1 ){
        return d[day];
    }
    
    int t1 = go(day+1);
    int t2 = go(day+t[day]) + p[day];
    d[day] = max(t1,t2);
    
    return  d[day];
}


int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> t[i] >> p[i];
        d[i] = -1;
    }
    
    ans = go(1);
    
    
    cout << ans << '\n';
    return 0;
}
