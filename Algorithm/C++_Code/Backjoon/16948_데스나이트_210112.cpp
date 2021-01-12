


#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;


int main(){

	int n,r1,c1,r2,c2;
	int visited[201][201];
	int dr[6] = { -2, -2, 0, 0, 2, 2 };
	int dc[6] = { -1, 1, -2, 2, -1, 1 };

	cin >> n;
	cin >> r1 >> c1 >> r2 >> c2;
	memset(visited, -1, sizeof(visited));

	queue<pair<int, int> > q;
	q.push(make_pair(r1, c1));
	visited[r1][c1] = 0;


	while (!q.empty()){
		pair<int, int> st = q.front();
		q.pop();
		int r = st.first;
		int c = st.second;
		if (r == r2 && c == c2) break;
		for (int dir = 0; dir < 6; dir++){
			int nr = r + dr[dir];
			int nc = c + dc[dir];
			if (nr >= 0 && nr < n && nc >= 0 && nc < n){
				if (visited[nr][nc] != -1) continue;
				visited[nr][nc] = visited[r][c] + 1;
				q.push(make_pair(nr, nc));
			}
		}

	}

	cout << visited[r2][c2] << '\n';


	return 0;
}