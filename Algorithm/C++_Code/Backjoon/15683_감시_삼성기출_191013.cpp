

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;


struct cctv{
	int r;
	int c;
	int type;
	int dir;
};

int n, m;
int maps[9][9];
int cmaps[9][9];

vector<cctv> v;
int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };

int ans = 65;


void draw(int sr, int sc, int dir){
	while (true){
		int nr = sr + dr[dir];
		int nc = sc + dc[dir];
		if (1 <= nr && n >= nr && 1 <= nc && m >= nc && cmaps[nr][nc] != 6){
			cmaps[nr][nc] = -1;
			sr = nr;
			sc = nc;
		}
		else {
			break;
		}
	
	}
}

int calc(){
	//printf("디버깅중 \n");
	int hap = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			//printf("%d ", cmaps[i][j]);
			if (cmaps[i][j] == 0) hap++;
		}
		//printf("\n");
	}
	//printf("합은 %d \n",hap);



	return hap;
}


void bp(int index){
	if (index >= v.size()){
		memset(cmaps, 0, sizeof(cmaps));
		memcpy(cmaps, maps, sizeof(cmaps));

		for (int i = 0; i < v.size(); i++){
			cctv ctv = v[i];
			if (ctv.type == 1){
				draw(ctv.r,ctv.c, ctv.dir);
			}
			else if (ctv.type == 2){
				if (ctv.dir == 0){
					draw(ctv.r, ctv.c, 0);
					draw(ctv.r, ctv.c, 2);
				}
				else {
					draw(ctv.r, ctv.c, 1);
					draw(ctv.r, ctv.c, 3);
				}
			}
			else if (ctv.type == 3){
				if (ctv.dir == 0){
					draw(ctv.r, ctv.c, 0);
					draw(ctv.r, ctv.c, 1);
				}
				else if (ctv.dir == 1){
					draw(ctv.r, ctv.c, 1);
					draw(ctv.r, ctv.c, 2);
				}
				else if (ctv.dir == 2){
					draw(ctv.r, ctv.c, 2);
					draw(ctv.r, ctv.c, 3);
				}
				else {
					draw(ctv.r, ctv.c, 3);
					draw(ctv.r, ctv.c, 0);
				}
			}
			else if (ctv.type == 4){
				if (ctv.dir == 0){
					draw(ctv.r, ctv.c, 3);
					draw(ctv.r, ctv.c, 0);
					draw(ctv.r, ctv.c, 1);
				}
				else if (ctv.dir == 1){
					draw(ctv.r, ctv.c, 0);
					draw(ctv.r, ctv.c, 1);
					draw(ctv.r, ctv.c, 2);
				}
				else if (ctv.dir == 2){
					draw(ctv.r, ctv.c, 1);
					draw(ctv.r, ctv.c, 2);
					draw(ctv.r, ctv.c, 3);
				}
				else {
					draw(ctv.r, ctv.c, 2);
					draw(ctv.r, ctv.c, 3);
					draw(ctv.r, ctv.c, 0);
				}
			}
			else {
				draw(ctv.r, ctv.c, 0);
				draw(ctv.r, ctv.c, 1);
				draw(ctv.r, ctv.c, 2);
				draw(ctv.r, ctv.c, 3);
			}
		}
		
		int hap = calc();
		ans = min(ans, hap);
		return;
	}
	cctv ntv = v[index];
	if (ntv.type == 1){
		for (int i = 0; i < 4; i++){
			v[index].dir = i;
			bp(index + 1);
		}
	}
	else if (ntv.type == 2){
		for (int i = 0; i < 2; i++){
			v[index].dir = i;
			bp(index + 1);
		}
	}
	else if (ntv.type == 3){
		for (int i = 0; i < 4; i++){
			v[index].dir = i;
			//printf("여기는 %d \n", v[index].dir);
			bp(index + 1);
		}
	}
	else if (ntv.type == 4){
		for (int i = 0; i < 4; i++){
			v[index].dir = i;
			
			bp(index + 1);
		}
	}
	else {
		bp(index + 1);
	}

}


int main(){
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%d", &maps[i][j]);
			if (maps[i][j] != 6 && maps[i][j] != 0){
				v.push_back(cctv{ i, j, maps[i][j], 0});
			}
		}
	}

	// 입력완료

	// 연산 시작

	bp(0);

	// 연산 완료

	// 결과 출력
	printf("%d", ans);


	return 0 ;
}