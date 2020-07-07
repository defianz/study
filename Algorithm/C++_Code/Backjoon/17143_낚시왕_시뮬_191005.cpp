

#include <stdio.h>
#include <vector>
using namespace std;

int r, c, m,ans;
int map[102][102];

struct sharks{
	int x;
	int y;
	int speed;
	int dir;
	int size;
	int catched;
};

vector<sharks> ss;

void movesharks(){
	int index = 0;
	for (auto a : ss){
		index += 1;
		if (a.catched == 0){
			if (a.dir == 1){
				int tmp = a.x - a.speed;
				if (tmp < 0) tmp = tmp*(-1) + 2;
				if (((tmp - 1) / (r - 1)) % 2 != 0) {
					a.x = r - ((tmp - 1) % (r - 1));
					a.dir = 1;
				}
				else {
					a.x = tmp % (r - 1);
					a.dir = 2;
				}
			}
			else if (a.dir == 2){
				int tmp = a.x + a.speed;
				if (((tmp - 1) / (r - 1)) % 2 != 0) {
					a.x = r - ((tmp - 1) % (r - 1));
					a.dir = 1;
				}
				else {
					a.x = tmp % (r - 1);
					a.dir = 2;
				}
			}
			else if (a.dir == 3){
				int tmp = a.y + a.speed;
				if (((tmp - 1) / (c - 1)) % 2 != 0) {
					a.y = c - ((tmp - 1) % (c - 1));
					a.dir = 4;
				}
				else {
					a.x = tmp % (c - 1);
					a.dir = 3;
				}
			}
			else if (a.dir == 4){
				int tmp = a.y - a.speed;
				if (tmp < 0) tmp = tmp*(-1) + 2;
				if (((tmp - 1) / (c - 1)) % 2 != 0) {
					a.y = c - ((tmp - 1) % (c - 1));
					a.dir = 4;
				}
				else {
					a.x = tmp % (c - 1);
					a.dir = 3;
				}
			}
		}
	}
	return;
}

int main(){
	scanf("%d %d %d", &r, &c, &m);

	for (int i = 0; i < m; i++){
		int tmp1, tmp2, tmp3, tmp4, tmp5;
		scanf("%d %d %d %d %d", &tmp1, &tmp2, &tmp3, &tmp4, &tmp5);
		map[tmp1][tmp2] = i;
		ss.push_back(sharks{ tmp1, tmp2, tmp3, tmp4, tmp5, 0 });
	}

	for (int t = 1; t <= c; t++){
		/* 상어 잡기 */
		int minr = r+1;
		for (int i = 1; i <= r; i++){
			if (map[i][t] != 0 && minr >i){
				minr = i;
			}
		}
		printf("상어잡기후n");
		//상어 사라짐
		if (minr != r + 1){
			ss[map[minr][t]].catched = 1;
			map[minr][t] = 0;
			ans += ss[map[minr][t]].size;
		}
		printf("상어이동전\n");
		// 상어 이동
		movesharks();
		printf("상어이동후\n");
		memset(map, 0, sizeof(map));
		for (int i = 0; i < m; i++){
			sharks nx = ss[i];
			if (nx.catched != 0) continue;
			if (map[nx.x][nx.y] != 0){
				if (ss[map[nx.x][nx.y]].size < nx.size){
					map[nx.x][nx.y] = i;
					ss[map[nx.x][nx.y]].catched = 2;
				}
				else {
					ss[i].catched = 2;
				}
			}
			else {
				map[nx.x][nx.y] = i;
			}
		}




	}

	printf("%d", ans);

	return 0;
}