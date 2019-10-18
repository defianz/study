


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int maps[11][11];
vector<pair<int, int> > v;
bool visited[11][11];
int ans;


void bp(int index, int type,int cnt){
	if (index > v.size()) {
		ans = min(cnt, ans);
		return;
	}
	if (visited[v[index].first][v[index].second]) bp(index + 1, type, cnt);
	// 다음으로 넘어가기

	// 그리기
	int r = v[index].first;
	int c = v[index].second;
	if (type == 1){
		visited[r][c] == true;
	}
	else if (type == 2){
		for (int i = r; i <= r + 1; i++){
			for (int j = c; j <= c + 1; j++){
				if (maps[i][j] != 1) return;
				visited[i][j] = true;
			}
		}
	}


}



int main(){

	
	for (int i = 1; i <= 10; i++){
		for (int j = 1; j <= 10; j++){
			scanf("%d", &maps[i][j]);
			if (maps[i][j] == 1){
				v.push_back({ i, j });
			}
		}
	}

	for (int i = 1; i <= 5; i++){
		bp(0,i);
	}
	


	return 0;
}