
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;


struct curve{
	int x;
	int y;
	int sdir;
	int gen;
};

int dy[4] = { 0, -1, 0, 1 };
int dx[4] = { 1, 0, -1, 0 };


int n,ans;
vector<curve> v;
vector<int> dirs;
int maps[101][101];

void makecurve(int y, int x, int gen, int cnt){
	if (cnt == gen){
		return;
	} 
	int tmp = dirs.size();
	//printf("%d \n", tmp);
	int tmp2 = 0;
	if (cnt != 0) tmp2 = pow(2, cnt - 1);
	for (int i = tmp - 1; i >= 0; i--){
		//printf("%d dir는 \n", dirs[i]);
		int ndir = (dirs[i] + 1)%4;
		//printf("ndir은 %d\n", ndir);
		y = y + dy[ndir];
		x = x + dx[ndir];
		maps[y][x] = 1;
		dirs.push_back(ndir);
	}
	makecurve(y, x, gen, cnt + 1);
}

int main(){

	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int tmp1, tmp2, tmp3, tmp4;
		scanf("%d %d %d %d", &tmp1, &tmp2, &tmp3, &tmp4);
		v.push_back(curve{ tmp1, tmp2, tmp3, tmp4 });
	}
	// 입력완료


	// 연산 시작
	for (int i = 0; i < v.size(); i++){
		dirs.clear();
		curve sc = v[i];
		int y = sc.y;
		int x = sc.x;
		int dir = sc.sdir;
		int k = sc.gen;
		maps[y][x] = 1;

		y = y + dy[dir];
		x = x + dx[dir];
		maps[y][x] = 1;
		dirs.push_back(dir);

		makecurve(y, x, k, 0);

	}
	//do{
	//	if (cnt % pow(2, cnt) == 1) dir = last + 1;
	//	
	//	maps[x][y] = 1;
	//	dir = (dir + 1)%4;
	//	if (cnt % 2 == 0) last = cnt;
	//} while (cnt++ == pow(2, k));
	//}

	// 연산완료
	// 디버깅
	//printf("디버깅\n");
	//for (int i = 0; i < 10; i++){
	//	for (int j = 0; j < 10; j++){
	//		printf("%d ", maps[i][j]);
	//	}
	//	printf("\n");
	//}
	// 디버깅 끝


	// 답을 위한 연산 네개가 1인 지점 고르기
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 100; j++){
			if (maps[i][j] == 1 && maps[i + 1][j] == 1 && maps[i][j + 1] == 1 && maps[i + 1][j + 1] == 1) ans++;
		}
	}





	printf("%d", ans);

	return 0;
}