

#include <iostream>
#include <vector>
using namespace std;

int n, m;
int map[501][501];
bool visited[501][501];
int ans = 0;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

// int cal(vector<pair<int, int> > v)
// {
//     int ret = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         ret += map[v[i].first][v[i].second];
//     }
//     return ret;
// }

void move(int r, int c, int cnt, int hap)
{   
    // cout << r << ' ' << c << '\n';
    if (cnt == 4)
    {
        if (ans < hap)
            ans = hap;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nr = r + dr[i];
        int nc = c + dc[i];
        if (nr < 0 || nr > n-1 || nc < 0 || nc > m-1)
            continue;
        if (visited[nr][nc] == false)
        {
            visited[nr][nc] = true;
            move(nr, nc, cnt+1, hap+map[nr][nc]);
            visited[nr][nc] = false;
        }
    }
}

void excep(int r, int c){
    int tmp = 0;
    // if(r-1 >=0 && c+2 < n){
    //     tmp = map[r][c] + map[r][c+1] + map[r][c+2] + map[r-1][c+1];
    //     if(ans < tmp ) ans = tmp;
    // }
    // if(r+1 <m && c+2 <n ){
    //     tmp = map[r][c] + map[r][c+1] + map[r][c+2] + map[r+1][c+1];
    //     if(ans < tmp ) ans = tmp;
    // }
    // if(r+2 <m && c-1 >=0 ){
    //     tmp = map[r][c] + map[r+1][c] + map[r+2][c] + map[r+1][c-1];
    //     if(ans < tmp ) ans = tmp;
    // }
    // if(r+2 <m && c+1 < n ){
    //     tmp = map[r][c] + map[r+1][c] + map[r+2][c] + map[r+1][c+1];
    //     if(ans < tmp ) ans = tmp;
    // }
    if(r-1 >= 0 && c-1 >= 0 && c+1 <= m-1){
        tmp = map[r][c-1] + map[r][c] + map[r][c+1] + map[r-1][c];
        if(ans < tmp ) ans = tmp;
    }
    if(r+1 <= n-1 && c-1 >= 0 && c+1 <= m-1){
        tmp = map[r][c-1] + map[r][c] + map[r][c+1] + map[r+1][c];
        if(ans < tmp ) ans = tmp;
    }
    if(r-1 >= 0 && r+1 <= n-1 && c-1 >= 0){
        tmp = map[r-1][c] + map[r][c] + map[r+1][c] + map[r][c-1];
        if(ans < tmp ) ans = tmp;
    }

    if(r-1 >= 0 && r+1 <= n-1 && c+1 <= m-1){
        tmp = map[r-1][c] + map[r][c] + map[r+1][c] + map[r][c+1];
        if(ans < tmp ) ans = tmp;
    }
    
    return;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = true;
            move(i, j, 1, map[i][j]);
            visited[i][j] = false;
            excep(i,j);
        }
    }

    cout << ans << '\n';

    return 0;
}