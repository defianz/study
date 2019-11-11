


#include <stdio.h>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
int maps[21][21];
int cmaps[21][21];
int ans = 50000;
int hap[6] = { 0, };


void gogo(int r,int c, pair<int, int> left, pair<int, int> right){
	int lr = left.first;
	int lc = left.second;
	int rr = right.first;
	int rc = right.second;

	// 끝점 구하기
	int er = rr + (lr - r);
	int ec = rc - (c - lc);
	//  끝점 구하기 끝

	// 끝점이 나가리면 return
	if (er <1 || er>n || ec <1 || ec >n){
		return;
	}

	memset(cmaps, 0, sizeof(cmaps));
	// 1구역 계산
	for (int i = 1; i <= r-1; i++){
		for (int j = 1; j <= c; j++){
			cmaps[i][j] = 1;
		}
	}

	for (int i = r; i <= lr - 1; i++){
		for (int j = 1; j <= c-1 + r - i; j++){
			cmaps[i][j] = 1;
		}
	}

	// 2구역 계산
	for (int i = 1; i <= r; i++){
		for (int j = c+1; j <= n; j++){
			cmaps[i][j] = 2;
		}
	}
	for (int i = r; i <= rr; i++){
		for (int j = c + 1 + i -r ; j <= n; j++){
			cmaps[i][j] = 2;
		}
	}

	// 3구역 계산
	for (int i = lr; i <= er; i++){
		for (int j = 1; j <= lc -1 + i - lr; j++){
			cmaps[i][j] = 3;
		}
	}
	for (int i = er + 1; i <= n; i++){
		for (int j = 1; j <= ec - 1; j++){
			cmaps[i][j] = 3;
		}
	}

	// 4구역 계산
	for (int i = rr+1; i <= er; i++){
		for (int j = rc +rr + 1 -i; j <= n;j++){
			cmaps[i][j] = 4;
		}
	}
	for (int i = er + 1; i <= n; i++){
		for (int j = ec; j <= n; j++){
			cmaps[i][j] = 4;
		}
	}
	// 5구역 입력
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (cmaps[i][j] == 0){
				cmaps[i][j] = 5;
			}
		}
	}


	// 구역 입력 완료
	// 디버깅
	//printf("r: %d, c: %d, lr : %d, lc: %d, rr: %d, rc : %d, er : %d, ec : %d\n", r, c, lr, lc, rr, rc, er, ec);
	//for (int i = 1; i <= n; i++){
	//	for (int j = 1; j <= n; j++){
	//		printf("%d ", cmaps[i][j]);
	//	}
	//	printf("\n");
	//}
	//printf("\n");


	memset(hap, 0, sizeof(hap));
	// 인구수 계산
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			hap[cmaps[i][j]] += maps[i][j];
		}
	}


	// 인구수 계산완료
	int tmax = 0;
	int tmin = 50000;
	// max와 min 구하기
	for (int i = 1; i <= 5; i++){
		tmax = max(tmax, hap[i]);
		tmin = min(tmin, hap[i]);
	}

	//printf("hap 값은 \n");
	//for (int i = 1; i <= n; i++){
	//	printf("hap %d : %d ", i, hap[i]);
	//}
	//printf("\n");
	//printf("최대 %d 최소 %d \n", tmax, tmin);
	int dif = tmax - tmin;
	ans = min(dif, ans);
	return;
}


void go(int r, int c){
	// 그 점의 왼쪽점과 오른쪽 점 정렬
	vector<pair<int, int> > left;
	vector<pair<int, int> > right;

	// 왼쪽 먼저 넣기
	int ltmp = c;
	for (int i = r + 1; i <= n-1; i++){
		if (ltmp - 1 >= 1){
			left.push_back(make_pair(i, --ltmp));
		}
		else{
			break;
		}
	}

	// 오른쪽 넣기
	int rtmp = c;
	for (int i = r + 1; i <= n - 1; i++){
		if (rtmp + 1 <= n){
			right.push_back(make_pair(i, ++rtmp));
		}
		else{
			break;
		}
	}

	for (const auto a : left){
		for (const auto b : right){
			gogo(r,c,a, b);
		}
	}

}

int main(){

	//입력
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}
	// 입력 완료

	// 시작
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			go(i, j);
		}
	}
	//


	// 답 출력
	printf("%d", ans);

	return 0;
}