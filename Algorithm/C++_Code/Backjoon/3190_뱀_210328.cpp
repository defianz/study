
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n,k,l;
int map[101][101];
int mdir[10001];

struct Bam{
    int hr = 1;
    int hc = 1;
    queue<pair<int,int> > ggori;
    int dir = 1;
};

int dr[4] = {-1,0,1,0};
int dc[4] = {0,1,0,-1};

int main(){

    cin >> n;
    cin >> k;

    for(int i=0;i<k;i++){
        int r,c;
        cin >> r >> c;
        map[r][c] = 2;
    }

    cin >> l;

    for(int i=0;i<l;i++){
        int tmp;
        char tmp2;
        cin >> tmp;
        cin >> tmp2;
        if(tmp2 == 'D'){
            mdir[tmp] = 1;
        } else if (tmp2 == 'L'){
            mdir[tmp] = 3;
        }

        // cout << mdir[tmp] << '\n';
    }

    int cnt = 0;
    Bam bam;
    map[1][1] = 1;
    bam.ggori.push(make_pair(1,1));

    while(true){
        cnt++;
        int nr = bam.hr + dr[bam.dir];
        int nc = bam.hc + dc[bam.dir];
        // cout << nr << ' ' << nc << '\n';

        if(nr < 1 || nr > n || nc < 1 || nc > n ){
            break;
        } else if(map[nr][nc] == 1){
            break;
        }  else if (map[nr][nc] == 2){
            bam.hr = nr;
            bam.hc = nc;
            map[nr][nc] = 1;
            bam.ggori.push(make_pair(nr,nc));
        } else {
            bam.hr = nr;
            bam.hc = nc;
            map[nr][nc] = 1;
            bam.ggori.push(make_pair(nr,nc));
            int gr = bam.ggori.front().first;
            int gc = bam.ggori.front().second;
            bam.ggori.pop();
            map[gr][gc] = 0;
        }

        if(mdir[cnt] != 0){
            bam.dir = (bam.dir + mdir[cnt]) % 4;
        }
    }

    // for (int i=1; i<=n;i++){
    //     for(int j=1; j<=n; j++){
    //         cout << map[i][j] << ' ';
    //     }
    //     cout << '\n';
    // }

    cout << cnt << '\n';
    return 0;
}