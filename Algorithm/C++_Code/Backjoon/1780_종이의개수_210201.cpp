//
//  1780_종이의개수_210201.cpp
//  Algorithm
//
//  Created by salmon on 2021/02/01.
//

#include <iostream>
using namespace std;
int map[2188][2188];
int n;

int ans[3];

bool check(int a, int sx , int sy){
    int tmp = map[sx][sy];
    for(int i=0;i<a;i++){
        for(int j=0; j<a;j++){
            if(map[sx+i][sy+j] != tmp){
                return false;
            }
        }
    }
    return true;
}


void func(int a, int sx,int sy){
    if(a==1){
        ans[map[sx][sy]] += 1;
        return;
    }
    
    if(check(a,sx,sy) == false){
        for(int i=0; i<a; i += a/3 ){
            for(int j=0; j<a; j+= a/3){
                func(a/3,sx+i,sy+j);
            }
        }
        
    } else{
        ans[map[sx][sy]] += 1;
    }
}


int main(){
    
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int tmp;
            cin >> tmp;
            map[i][j] = tmp +1;
        }
    }
    
    func(n,0,0);
    
    cout << ans[0] << '\n' << ans[1] << '\n' << ans[2] << '\n';
    
    return 0;
}
