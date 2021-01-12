
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int n, m;
int ans = 0;
vector<pair<int, int> > v;
int map[9][9] = { 0, };
bool check[81] = { false };

int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };


void bfs(){
	int tmp[9][9];
	memcpy(tmp, map, sizeof(tmp));

	for (int i = 0; i < v.size(); i++){
		queue<pair<int, int> > q;
		q.push(v[i]);
		while (!q.empty()){
			pair<int, int> now = q.front();
			q.pop();
			int r = now.first;
			int c = now.second;
			for (int dir = 0; dir < 4; dir++){
				int nr = r + dr[dir];
				int nc = c + dc[dir];
				if (nr >= 0 && nr < n && nc >= 0 && nc < m){
					if (tmp[nr][nc] == 0){
						tmp[nr][nc] = 2;
						q.push(make_pair(nr, nc));
					}
				}
			}

		}
	}

	int cnt = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (tmp[i][j] == 0) cnt += 1;
		}
	}

	ans = max(cnt, ans);
	return;

}

void bf(int cnt){
	if (cnt == 3){
		bfs();
		return;
	}
	for (int i = 0; i < n*m; i++){
		if (check[i]) continue;
		int r = i / m;
		int c = i % m;
		map[r][c] = 1;
		check[i] = true;
		bf(cnt + 1);
		map[r][c] = 0;
		check[i] = false;

	}
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> map[i][j];
			if (map[i][j] == 2){
				check[i*m + j] = true;
				v.push_back(make_pair(i, j));
			}
			if (map[i][j] == 1){
				check[i*m + j] = true;
			}
		}
	}

	bf(0);


	cout << ans << '\n';
	return 0;
}