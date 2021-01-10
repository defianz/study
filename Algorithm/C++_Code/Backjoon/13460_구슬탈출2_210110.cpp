//
//  13460_구슬탈출2_210110.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/10.
//

#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[11][11];

int gx,gy;
int ans = 11;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};


pair<int,int> move (int x,int y, int dir, int flag){
    pair<int,int> tmp;
    int nx,ny;
    int sx = x;
    int sy = y;
    while(true){
        nx = x + dx[dir];
        ny = y + dy[dir];
        if(arr[nx][ny]==2){
            tmp.first=nx;
            tmp.second=ny;
            break;
        } else if(arr[nx][ny] ==1){
            tmp.first = x;
            tmp.second= y;
            break;
        } else if(arr[nx][ny] == 0){
            x = nx;
            y = ny;
        } else {
            tmp.first = x;
            tmp.second= y;
            break;
        }
    }
    arr[sx][sy] = 0;
    if(arr[tmp.first][tmp.second] != 2) arr[tmp.first][tmp.second] = flag;
    return tmp;
}

void bf(int cnt , int rx, int ry, int bx, int by){
    if(cnt>10){
        return;
    }
    if(bx==gx && by==gy){
        return;
    }
    if(rx==gx && ry==gy){
        ans = min(ans,cnt);
        return;
    }
    

    
    for(int dir =0; dir<4; dir++){
        pair<int,int> rv;
        pair<int,int> bv;
        
        if(dir ==0){
            //x가 작은놈
            if(rx<bx){
                rv = move(rx,ry,dir,3);
                bv = move(bx,by,dir,4);
            } else {
                bv = move(bx,by,dir,4);
                rv = move(rx,ry,dir,3);
            }
        } else if(dir ==1 ){
            // y가 큰놈
            if(ry>by){
                rv = move(rx,ry,dir,3);
                bv = move(bx,by,dir,4);
            } else {
                bv = move(bx,by,dir,4);
                rv = move(rx,ry,dir,3);
            }
        } else if(dir ==2 ){
            // x가 큰놈
            if(rx>bx){
                rv = move(rx,ry,dir,3);
                bv = move(bx,by,dir,4);
            } else {
                bv = move(bx,by,dir,4);
                rv = move(rx,ry,dir,3);
            }
        } else {
            // y가 작은놈
            if(ry<by){
                rv = move(rx,ry,dir,3);
                bv = move(bx,by,dir,4);
            } else {
                bv = move(bx,by,dir,4);
                rv = move(rx,ry,dir,3);
            }
        }
        bf(cnt+1, rv.first,rv.second,bv.first,bv.second);
        if(arr[rv.first][rv.second] != 2) arr[rv.first][rv.second] = 0;
        if(arr[bv.first][bv.second] != 2) arr[bv.first][bv.second] = 0;
        arr[rx][ry] = 3;
        arr[bx][by] = 4;
    }
}


int main(){
    
    cin >> n >> m;
    int rx,ry;
    int bx,by;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char tmp;
            cin >> tmp;
            if(tmp == '#') arr[i][j] =1;
            else if(tmp == '.') arr[i][j]=0;
            else if(tmp == 'O') {
                arr[i][j]=2;
                gx = i;
                gy = j;
            }
            else if(tmp == 'R'){
                arr[i][j] =3;
                rx=i;
                ry=j;
            } else if (tmp =='B'){
                arr[i][j]=4;
                bx=i;
                by=j;
            }
        }
    }
    
    bf(0,rx,ry,bx,by);
    
    if(ans == 11) {
        cout << "-1" << '\n';
        return 0 ;
    }
    cout << ans << '\n';
    
    return 0;
}
