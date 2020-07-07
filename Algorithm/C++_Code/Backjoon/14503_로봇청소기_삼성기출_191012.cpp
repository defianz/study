
#include <stdio.h>
#include <queue>
#include <vector>
using namespace std;

int n, m;
int r, c, dir;
int maps[51][51];
int ans;
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };
queue<pair<int, int>> q;
int debugs[51][51];
vector<int> v;

int main(){
	scanf("%d %d", &n, &m);
	scanf("%d %d %d", &r, &c, &dir);

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &maps[i][j]);
		}
	}
	maps[r][c] = 2; 
	// 입력 완료
	while (true){
		int cnt = 0;
		v.clear(); 
		for (int i = 1; i <= 4; i++){
			int nr = r + dr[(dir + 3*i) % 4];
			int nc = c + dc[(dir + 3*i) % 4];
			if (maps[nr][nc] == 1 || maps[nr][nc] == 2) cnt++;
			else{
				v.push_back(i);
			}
		}
		if (cnt == 4) {
			int nr = r + dr[(dir + 2) % 4];
			int nc = c + dc[(dir + 2) % 4];
			if (maps[nr][nc] == 1) break;
			else{
				r = nr;
				c = nc;
				maps[r][c] = 2;
			}
		}
		else {
			r = r + dr[(dir + 3*v[0]) % 4];
			c = c + dc[(dir + 3*v[0]) % 4];
			dir = dir + 3 * v[0];
			maps[r][c] = 2;
		}


	}
	// 답 출력
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			if (maps[i][j] == 2) ans++;
		}
	}
	printf("%d", ans);

	return 0;
}