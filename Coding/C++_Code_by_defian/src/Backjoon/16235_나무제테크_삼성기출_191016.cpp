
#include <stdio.h>
#include <cstring>
#include <deque>
#include <algorithm>
#include <queue>
using namespace std;

struct tree{
	int age;
	int r;
	int c;
	bool operator <(tree b){
		return age < b.age;
	}
};


int main(){

	int n, m, k;
	int maps[11][11];
	int anplus[11][11];
	deque<tree> v;

	int dr[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
	int dc[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };



	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &anplus[i][j]);
		}
	}

	for (int i = 0; i < m; i++){
		int tmp1, tmp2, tmp3;
		scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
		v.push_back(tree{ tmp3, tmp1, tmp2 });
	}


	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			maps[i][j] = 5;
		}
	}

	sort(v.begin(), v.end());

	deque<tree> alive;
	queue<tree> dead;
	deque<tree> fyear;

	while (k--){

		//printf("k년 %d\n", k);
		//for (int i = 1; i <= n; i++){
		//	for (int j = 1; j <= n; j++){
		//		printf("%d ",maps[i][j]);
		//	}
		//	printf("\n");
		//}
		//printf("\n");

		//for (int i = 0; i < v.size(); i++){
		//	printf("%d %d %d %d\n", v[i].age, v[i].r, v[i].c, v[i].die);
		//}
		//printf("\n");

		


		//봄 시작
	

		for (int i = 0; i < v.size(); i++){
			int x = v[i].r;
			int y = v[i].c;
			int ag = v[i].age;

			if (maps[x][y] >= ag){
				maps[x][y] -= ag;
				v[i].age++;
				alive.push_back(v[i]);
				if (v[i].age % 5 == 0) fyear.push_back(v[i]);
			}
			else{
				dead.push(v[i]);
			}
		}
		// 봄 끝

		// 여름 시작
		while (!dead.empty()){
			int x = dead.front().r;
			int y = dead.front().c;
			int ag = dead.front().age;
			dead.pop();
			maps[x][y] += ag / 2;
		}
		// 여름 끝

		/*	for (int i = 0; i < v.size();){
		if (v[i].die){
		v.erase(v.begin() + i);
		}
		else{
		i++;
		}
		}
		*/


		// 가을 시작
		for (int i = 0; i < fyear.size(); i++){
			for (int dir = 0; dir < 8; dir++){
				int nr = fyear[i].r + dr[dir];
				int nc = fyear[i].c + dc[dir];
				if (1 <= nr && nr <= n && 1 <= nc && nc <= n){
					alive.push_front(tree{ 1, nr, nc });
				}
			}
		}

		// 가을 끝

		// 겨울
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				maps[i][j] += anplus[i][j];
			}
		}
		// 겨울 끝

		v = alive;
		alive.clear();
		fyear.clear();

	}
	//printf("k년 %d\n", k);
	//for (int i = 1; i <= n; i++){
	//	for (int j = 1; j <= n; j++){
	//		printf("%d ", maps[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");

	//for (int i = 0; i < v.size(); i++){
	//	printf("%d %d %d %d\n", v[i].age, v[i].r, v[i].c, v[i].die);
	//}
	//printf("\n");



	int ans = v.size();

	printf("%d", ans);

	return 0;
}