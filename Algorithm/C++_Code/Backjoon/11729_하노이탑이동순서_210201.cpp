//
//  11729_하노이탑이동순서_210201.cpp
//  Algorithm
//
//  Created by salmon on 2021/02/01.
//

#include <iostream>
#include <vector>
using namespace std;

int n;
vector<pair<int ,int>> v;

void solve(int n ,int x, int y){
    if(n==1){
        v.push_back(make_pair(x,y));
        return;
    }
    
    int z = 6 - x - y;
    solve(n-1,x,z);
    v.push_back(make_pair(x,y));
    solve(n-1,z,y);
    
}

int main(){

    cin >> n;
    
    solve(n,1,3);
    
    cout << v.size() << '\n';
    
    for(auto a : v){
        cout << a.first << ' ' << a.second << '\n';
    }
    
    return 0;
}
