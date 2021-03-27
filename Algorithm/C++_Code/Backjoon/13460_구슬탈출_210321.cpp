
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int n,m;
char map[11][11];
int ans = 11;
int gr,gc;
int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

pair<int,int> movingBall(int sr, int sc, int xr, int xc, int dir){
    queue<pair<int,int> > q;
    q.push(make_pair(sr,sc));

    while(!q.empty()){
        int cr = q.front().first;
        int cc = q.front().second;
        q.pop();
        int nr = cr + dr[dir];
        int nc = cc + dc[dir];
        // cout << map[nr][nc] << '\n';
        if(map[nr][nc] == '.'){
            if(nr == xr && nc == xc){
                return make_pair(cr,cc);
            }
            q.push(make_pair(nr,nc));
        } else if(map[nr][nc] == '#'){
            return make_pair(cr,cc);
        } else if(map[nr][nc] == 'O'){
            return make_pair(nr,nc);
        }
    }
}

bool checkGoal(int sr, int sc){
    if( sr == gr && sc == gc){
        return true;
    }
     return false;
}

void foo(int cnt, int rr, int rc ,int br, int bc, int dir){

    if(cnt == 11 ){
        return;
    }
    // 0 이면 빨 먼저 , 1이면 블루 먼저

    int diridx = 0;
    if(dir == 0 ) {
        diridx = rr > br ? 1 : 0;
    } else if (dir == 1){
        diridx = rc > bc ? 0 : 1;
    } else if (dir == 2){
        diridx = rr > br ? 0 : 1;
    } else {
        diridx = rc > bc ? 1 : 0;
    }

    // cout << "try start : " << dir << " cnt : " << cnt << " " << " rr,rc : " << rr << " " << rc << '\n';

    pair<int,int> red,blue;
    if(diridx == 0){
      red = movingBall(rr,rc,br,bc,dir);
      rr = red.first;
      rc = red.second;
      blue = movingBall(br,bc,rr,rc,dir);
      br = blue.first;
      bc = blue.second;
    } else {
      blue = movingBall(br,bc,rr,rc,dir);
      br = blue.first;
      bc = blue.second;
      red = movingBall(rr,rc,br,bc,dir);
      rr = red.first;
      rc = red.second;
    }



    // cout << "try : " << cnt << " " << " rr,rc : " << rr << " " << rc << '\n';

    bool redgoal = checkGoal(rr,rc);
    bool bluegoal = checkGoal(br,bc);

    if(bluegoal) return;
    else if(redgoal == true && bluegoal == false){
        if (ans > cnt){
            ans = cnt;
        }
        return;       
    } else {
        for(int i=0;i<4;i++){
            foo(cnt+1,rr,rc,br,bc,i);
        }
    }
    return;
}



int main(){

    int rr,rc, br,bc;
    cin >> n >> m;

    for(int i=0;i<n;i++){
        string tmp;
        cin >> tmp;
        for(int j=0;j<m;j++){
            map[i][j] = tmp[j];

            if(map[i][j] == 'R'){
                rr = i;
                rc = j;
                map[i][j] = '.';
            } else if (map[i][j] == 'B'){
                br = i;
                bc = j;
                map[i][j] = '.';
            } else if (map[i][j] == 'O'){
                gr = i;
                gc = j;
            }
        }
    }
    // cout << movingBall(3,1,1,3,1).first << movingBall(3,1,1,3,1).second << '\n';
    // //  디버깅
    // for(int i=0;i<n;i++){
    //     for(int j=0; j<m;j++){
    //         cout << map[i][j];
    //     }
    //     cout << '\n';
    // }

    for(int dir =0; dir<4;dir++){
        foo(1,rr,rc,br,bc,dir);
    }

    if (ans == 11 ){
        cout << -1 << '\n';
    } else {
        cout << ans << '\n';
    }

    return 0;
}