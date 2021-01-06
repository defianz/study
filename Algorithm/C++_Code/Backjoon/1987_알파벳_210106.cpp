//
//  1987_알파벳_210106.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/06.
//

#include <iostream>
#include <algorithm>
using namespace std;
int r,c;
char arr[21][21];
bool alpha[100]={false,};

int ans =1;
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

void bf(int cnt, int x, int y){
    for(int dir=0; dir<4; dir++){
        int nx = x+dx[dir];
        int ny = y+dy[dir];
        if(alpha[arr[nx][ny]] == true) continue;
        if(nx>=1 && ny >= 1 && nx <=r && ny<=c){
            alpha[arr[nx][ny]] = true;
            bf(cnt+1, nx,ny);
            alpha[arr[nx][ny]] = false;
        }
    }
    ans = max(cnt,ans);
    return;
}

int main(){
    cin >> r >> c;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cin >> arr[i][j];
        }
    }
    
    alpha[arr[1][1]] = true;
    bf(1,1,1);
    
    cout << ans << '\n';
    
    return 0;
}
