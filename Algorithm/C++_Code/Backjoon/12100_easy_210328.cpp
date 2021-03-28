
#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

int n;
int ans = 0;
int d[5] = {
    0,
};
int maps[21][21] = {
    0,
};
int cmaps[21][21] = {
    0,
};
bool combi[21][21] = {
    false,
};

struct block
{
    int r;
    int c;
    int res;
};

void cmapsAns()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (ans < cmaps[i][j])
                ans = cmaps[i][j];
        }
    }
}

void foo(int cnt)
{
    if (cnt == 5)
    {
        memcpy(cmaps, maps, sizeof(cmaps));

        for (int i = 0; i < 5; i++)
        {
            memset(combi, false, sizeof(combi));
            int dir = d[i];
            if (dir == 0)
            {
                for (int j = 1; j <= n; j++)
                {
                    block tmp = {1, j, cmaps[1][j]};
                    for (int i = 2; i <= n; i++)
                    {
                        if (cmaps[i][j] != 0)
                        {
                            if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false)
                            {
                                combi[tmp.r][tmp.c] = true;
                                cmaps[tmp.r][tmp.c] += cmaps[i][j];
                                cmaps[i][j] = 0;
                                tmp.res += cmaps[tmp.r][tmp.c];
                            }
                            else if (tmp.res == 0)
                            {
                                cmaps[tmp.r][tmp.c] = cmaps[i][j];
                                tmp.res = cmaps[i][j];
                                cmaps[i][j] = 0;
                            }
                            else
                            {
                                cmaps[tmp.r + 1][tmp.c] = cmaps[i][j];
                                tmp = {tmp.r + 1, tmp.c, cmaps[i][j]};
                                if (tmp.r != i)
                                    cmaps[i][j] = 0;
                            }
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
            else if (dir == 1)
            {
                for (int i = 1; i <= n; i++)
                {
                    block tmp = {i, n, cmaps[i][n]};
                    for (int j = n - 1; j >= 1; j--)
                    {
                        if (cmaps[i][j] != 0)
                        {
                            if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false)
                            {
                                combi[tmp.r][tmp.c] = true;
                                cmaps[tmp.r][tmp.c] += cmaps[i][j];
                                cmaps[i][j] = 0;
                                tmp.res += cmaps[tmp.r][tmp.c];
                            }
                            else if (tmp.res == 0)
                            {
                                cmaps[tmp.r][tmp.c] = cmaps[i][j];
                                tmp.res = cmaps[i][j];
                                cmaps[i][j] = 0;
                            }
                            else
                            {
                                cmaps[tmp.r][tmp.c - 1] = cmaps[i][j];
                                tmp = {tmp.r, tmp.c - 1, cmaps[i][j]};
                                if (tmp.c != j)
                                    cmaps[i][j] = 0;
                            }
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
            else if (dir == 2)
            {
                for (int j = 1; j <= n; j++)
                {
                    block tmp = {n, j, cmaps[n][j]};
                    for (int i = n - 1; i >= 1; i--)
                    {
                        if (cmaps[i][j] != 0)
                        {
                            if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false)
                            {
                                combi[tmp.r][tmp.c] = true;
                                cmaps[tmp.r][tmp.c] += cmaps[i][j];
                                cmaps[i][j] = 0;
                                tmp.res += cmaps[tmp.r][tmp.c];
                            }
                            else if (tmp.res == 0)
                            {
                                cmaps[tmp.r][tmp.c] = cmaps[i][j];
                                tmp.res = cmaps[i][j];
                                cmaps[i][j] = 0;
                            }
                            else
                            {
                                cmaps[tmp.r - 1][tmp.c] = cmaps[i][j];
                                tmp = {tmp.r - 1, tmp.c, cmaps[i][j]};
                                if (tmp.r != i)
                                    cmaps[i][j] = 0;
                            }
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    block tmp = {i, 1, cmaps[i][1]};
                    for (int j = 2; j <= n; j++)
                    {
                        if (cmaps[i][j] != 0)
                        {
                            if (cmaps[i][j] == tmp.res && combi[tmp.r][tmp.c] == false)
                            {
                                combi[tmp.r][tmp.c] = true;
                                cmaps[tmp.r][tmp.c] += cmaps[i][j];
                                cmaps[i][j] = 0;
                                tmp.res += cmaps[tmp.r][tmp.c];
                            }
                            else if (tmp.res == 0)
                            {
                                cmaps[tmp.r][tmp.c] = cmaps[i][j];
                                tmp.res = cmaps[i][j];
                                cmaps[i][j] = 0;
                            }
                            else
                            {
                                cmaps[tmp.r][tmp.c + 1] = cmaps[i][j];
                                tmp = {tmp.r, tmp.c + 1, cmaps[i][j]};
                                if (tmp.c != j)
                                    cmaps[i][j] = 0;
                            }
                        }
                        else
                        {
                            continue;
                        }
                    }
                }
            }
        }

        cmapsAns();
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        d[cnt] = i;
        foo(cnt + 1);
    }
}

int main()
{

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> maps[i][j];
        }
    }

    foo(0);

    cout << ans << '\n';

    return 0;
}