

#include <stdio.h>
#include <cstring>
#include <deque>
#include <algorithm>
using namespace std;

struct tree{
	int age;
	int r;
	int c;
	bool die;
	bool operator <(tree b){
		return age < b.age;
	}
};


int main(){

	int n, m, k;
	int maps[11][11];
	int anplus[11][11];
	deque<tree> v;
	deque<tree> nw;

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
		v.push_back(tree{ tmp3, tmp1, tmp2,false });
	}


	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			maps[i][j] = 5;
		}
	}
	sort(v.begin(), v.end());



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
			if (maps[v[i].r][v[i].c] >= v[i].age){
				maps[v[i].r][v[i].c] -= v[i].age;
				v[i].age++;
			}
			else{
				v[i].die = true;
			}
		}
		// 봄 끝

		// 여름 시작
		for (int i = 0; i < v.size(); i++){
			if (!v[i].die) continue;
			maps[v[i].r][v[i].c] += v[i].age / 2;
		}
		// 여름 끝
		
		for (int i = 0; i < v.size();){
			if (v[i].die){
				v.erase(v.begin() + i);
			}
			else{
				i++;
			}
		}


		
		// 가을 시작
		for (int i = 0; i < v.size(); i++){
			if (v[i].age % 5 != 0) continue;
			for (int dir = 0; dir < 8; dir++){
				int nr = v[i].r + dr[dir];
				int nc = v[i].c + dc[dir];
				if (1 <= nr && nr <= n && 1 <= nc && nc <= n){
					nw.push_back(tree{ 1, nr, nc, false });
				}
			}
		}
		
		for (int i = 0; i < nw.size(); i++){
			v.push_front(nw[i]);
		}
		nw.clear();
		
		// 가을 끝
	
		// 겨울
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				maps[i][j] += anplus[i][j];
			}
		}
		// 겨울 끝

	

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