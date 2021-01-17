
#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int map[8][8][9];
vector<pair<int, int> > wall;

int dr[9] = { 0,-1, -1, 0, 1, 1, 1, 0, -1 };
int dc[9] = { 0, 0, 1, 1, 1, 0, -1, -1, -1 };


void dfs(int r, int c, int time){
	for (int dir = 0; dir < 9; dir++){
		int nr = r + dr[dir];
		int nc = c + dc[dir];
		if (nr < 0 || nr >= 8 || nc < 0 || nc >= 8) continue;
		if (map[nr][nc][time] != 1 && map[nr][nc][time+1] != 1) map[nr][nc][time + 1] = 2;
	}
}


int main(){
	bool easy = false;
	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			char tmp;
			cin >> tmp;
			if (tmp == '.') map[i][j][0] == 0;
			if (tmp == '#') {
				map[i][j][0] = 1;
				easy = true;
				wall.push_back(make_pair(i, j));
			}
		}
	}


	if (easy == false) {
		cout << 1 << '\n';
		return 0;
	}
	
	for (int i = 1; i < 8; i++){
		for (int j = 0; j < 7; j++){
			for (int k = 0; k < 8; k++){
				map[j + 1][k][i] = map[j][k][i - 1];
			}
		}
	}

	map[7][0][0] = 2;

	
	for (int time = 0; time < 8; time++){
		vector<pair<int, int> > v;
		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				if (map[i][j][time] == 2){
					v.push_back(make_pair(i, j));
				}
			}
		}

		for (int i = 0; i < v.size(); i++){
			dfs(v[i].first, v[i].second, time);
		}
	}

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			if (map[i][j][8] == 2){
				cout << 1 << '\n';
				return 0;
			}
		}
	}



	cout << 0 << '\n';
	return 0;
}