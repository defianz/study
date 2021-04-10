
#include <iostream>
using namespace std;

int n, m, x, y, k;
int map[20][20];
int dice[6];
int go[1001];

int dx[5] = {0, 0, 0, -1, 1};
int dy[5] = {0, 1, -1, 0, 0};

void rotate(int go)
{
    int tmp = 0;
    if (go == 1)
    {
        tmp = dice[5];
        dice[5] = dice[2];
        dice[2] = dice[0];
        dice[0] = dice[4];
        dice[4] = tmp;
    }
    else if (go == 4)
    {
        tmp = dice[5];
        dice[5] = dice[3];
        dice[3] = dice[0];
        dice[0] = dice[1];
        dice[1] = tmp;
    }
    else if (go == 2)
    {
        tmp = dice[5];
        dice[5] = dice[4];
        dice[4] = dice[0];
        dice[0] = dice[2];
        dice[2] = tmp;
    }
    else
    {
        tmp = dice[5];
        dice[5] = dice[1];
        dice[1] = dice[0];
        dice[0] = dice[3];
        dice[3] = tmp;
    }
}

void move(int go)
{
    int nx = x + dx[go];
    int ny = y + dy[go];
    if (nx < 0 || nx > n - 1 || ny < 0 || ny > m - 1)
    {
        return;
    }

    rotate(go);
    if (map[nx][ny] == 0)
    {
        map[nx][ny] = dice[5];
    }
    else
    {
        dice[5] = map[nx][ny];
        map[nx][ny] = 0;
    }
    x = nx;
    y = ny;
    cout << dice[0] << '\n';
}

int main()
{
    cin >> n >> m >> x >> y >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < k; i++)
    {
        cin >> go[i];
    }

    for (int i = 0; i < k; i++)
    {
        move(go[i]);
    }
    return 0;
}