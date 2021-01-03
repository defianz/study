

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m;
int arr[501][501];
bool visited[501][501] = { false, };
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int ans = 0;

void bf(int r, int c, int hap, int cnt){
	if (cnt == 4) {
		ans = max(ans, hap);
		return;
	}
	
	for (int dir = 0; dir < 4; dir++){
		int nx = r + dx[dir];
		int ny = c + dy[dir];
		if (0 <= nx && 0 <= ny && nx < n && ny < m && !visited[nx][ny]){
			visited[nx][ny] = true;
			bf(nx, ny, hap + arr[nx][ny], cnt + 1);
			visited[nx][ny] = false;
		}

	}
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			memset(visited, false, sizeof(visited));
			visited[i][j] = true;
			bf(i, j,arr[i][j],1);
			visited[i][j] = false;
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (i + 1 < n && j + 2 < m) ans = max(ans, arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1]);
			if (0 <= i - 1 && j + 2 < m)  ans = max(ans, arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i - 1][j + 1]);
			if (i + 2 < n && j + 1 < m)  ans = max(ans, arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 1][j + 1]);
			if (i + 2 < n && 0 <= j - 1)  ans = max(ans, arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 1][j - 1]);
		}
	}

	cout << ans << '\n';



	return 0;
}