

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int arr[21][21];
bool flag = true;
int ans = 11;

int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };

void bf(int cnt, int c1x, int c1y, int c2x, int c2y){
	if (cnt == 11){
		return;
	}

	bool flag1 = false;
	bool flag2 = false;
	if (c1x < 0 || c1y < 0 || c1x >= n || c1y >= m) flag1 = true;
	if (c2x < 0 || c2y < 0 || c2x >= n || c2y >= m) flag2 = true;

	if (flag1 && !flag2){
		ans = min(ans, cnt);
		flag = false;
		return;
	}
	if (!flag1 && flag2){
		ans = min(ans, cnt);
		flag = false;
		return;
	}
	if (flag1 && flag2) return;

	for (int dir = 0; dir < 4; dir++){
		int n1x = c1x + dx[dir];
		int n1y = c1y + dy[dir];
		int n2x = c2x + dx[dir];
		int n2y = c2y + dy[dir];

		if (n1x >= 0 && n1y >= 0 && n1x < n && n1y < m){
			if (arr[n1x][n1y] == 2){
				n1x = c1x;
				n1y = c1y;
			}
		}

		if (n2x >= 0 && n2y >= 0 && n2x < n && n2y < m){
			if (arr[n2x][n2y] == 2){
				n2x = c2x;
				n2y = c2y;
			}
		}

		bf(cnt + 1, n1x, n1y, n2x, n2y);
	}
}

int main(){

	cin >> n >> m;
	vector<pair<int, int>> coins;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			char tmp;
			cin >> tmp;
			if (tmp == 'o') {
				arr[i][j] = 1;
				coins.push_back(make_pair(i, j));
			}
			else if (tmp == '.') arr[i][j] = 0;
			else arr[i][j] = 2;
		}
	}
	bool check[4] = { false, };
	bf(0, coins[0].first, coins[0].second, coins[1].first, coins[1].second);
	
	if (flag) cout << -1 << '\n';
	else cout << ans << '\n';

	return 0;
}