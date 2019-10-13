
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

char map[11][11];

int n, m;
int ans = 11;
pair<int, int> ball[2];
int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };




void bp(int cnt, int dir, pair<int, int> rball, pair<int, int>bball){
	if (cnt > 10) return;
	//printf("여기까지?");

	bool flagr = false;
	bool flagb = false;
	//cout << "cnt값은 " << cnt << "\n";
	if ((rball.first + dy[dir]) == bball.first && (rball.second + dx[dir] )== bball.second){
		// 파란공 돌리기
		while (true){
			/*	cout << "무한루프 파란공" << "\n";
			cout << "파란공 위치 : " << ball[1].first << " " << ball[1].second << " \n";*/
			int ny = bball.first + dy[dir];
			int nx = bball.second + dx[dir];
			if (map[ny][nx] == 'O') {
				bball.first = n;
				bball.second = m;
				flagb = true;
				break;
			}
			if (map[ny][nx] != '#' && !((ny == rball.first) && (nx == rball.second))){
				bball.first = ny;
				bball.second = nx;
			}
			else {
				break;
			}
		}

		// 빨간공 돌리기
		while (true){
			//cout << "무한루프 빨간공" << "\n";
			//cout << "빨간공 위치 : " << ball[0].first << " " << ball[0].second << " \n";
			int ny = rball.first + dy[dir];
			int nx = rball.second + dx[dir];
			if (map[ny][nx] == 'O') {
				flagr = true;
				rball.first = n;
				rball.second = m;
				break;
			}
			if (map[ny][nx] != '#' && !((ny == bball.first) && (nx == bball.second))){
				rball.first = ny;
				rball.second = nx;
			}
			else {
				break;
			}
		}
		if (bball.first != n && bball.second != m){
			while (true){
				/*	cout << "무한루프 파란공" << "\n";
				cout << "파란공 위치 : " << ball[1].first << " " << ball[1].second << " \n";*/
				int ny = bball.first + dy[dir];
				int nx = bball.second + dx[dir];
				if (map[ny][nx] == 'O') {
					bball.first = n;
					bball.second = m;
					flagb = true;
					break;
				}
				if (map[ny][nx] != '#' && !((ny == rball.first) && (nx == rball.second))){
					bball.first = ny;
					bball.second = nx;
				}
				else {
					break;
				}
			}
		}
	}
	else {

		// 빨간공 돌리기
		while (true){
			//cout << "무한루프 빨간공" << "\n";
			//cout << "빨간공 위치 : " << ball[0].first << " " << ball[0].second << " \n";
			int ny = rball.first + dy[dir];
			int nx = rball.second + dx[dir];
			if (map[ny][nx] == 'O') {
				flagr = true;
				rball.first = n;
				rball.second = m;
				break;
			}
			if (map[ny][nx] != '#' && !(ny == bball.first && nx == bball.second)){

				rball.first = ny;
				rball.second = nx;
			}
			else {
				break;
			}
		}
		// 파란공 돌리기
		while (true){
			/*	cout << "무한루프 파란공" << "\n";
				cout << "파란공 위치 : " << ball[1].first << " " << ball[1].second << " \n";*/
			int ny = bball.first + dy[dir];
			int nx = bball.second + dx[dir];
			if (map[ny][nx] == 'O') {
				bball.first = n;
				bball.second = m;
				flagb = true;
				break;
			}
			if (map[ny][nx] != '#' && !(ny == rball.first && nx == rball.second)){

				bball.first = ny;
				bball.second = nx;
			}
			else {
				break;
			}
		}
		if (rball.first != n && rball.second != m){
			// 빨간공 돌리기
			while (true){
				//cout << "무한루프 빨간공" << "\n";
				//cout << "빨간공 위치 : " << ball[0].first << " " << ball[0].second << " \n";
				int ny = rball.first + dy[dir];
				int nx = rball.second + dx[dir];
				if (map[ny][nx] == 'O') {
					flagr = true;
					rball.first = n;
					rball.second = m;
					break;
				}
				if (map[ny][nx] != '#' && !(ny == bball.first && nx == bball.second)){

					rball.first = ny;
					rball.second = nx;
				}
				else {
					break;
				}
			}
		}
	}

	cnt = cnt + 1;
	if (flagb == true) return;
	if (flagr == true && flagb == false) {
		ans = min(ans, cnt);
		return;
	}

	for (int i = 0; i < 4; i++){
		if (i == dir) continue;
		if (i == (dir + 2) % 4) continue;

		bp(cnt, i, rball, bball);
	}
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++){
			cin >> map[i][j];
			// ball[0] 은 빨간공
			if (map[i][j] == 'R') ball[0] = make_pair(i, j);
			// ball[1] 은 파란공
			if (map[i][j] == 'B') ball[1] = make_pair(i, j);
		}
	}
	// 입력 완료

	// dfs 시작

	for (int i = 0; i < 4; i++){
		bp(0, i, ball[0], ball[1]);
	}

	//  dfs 종료

	// 출력 완료

	if (ans == 11) cout << "-1" << "\n";
	else {
		cout << ans << "\n";
	}

	// 출력 종료

	return 0;

}