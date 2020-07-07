

#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, k;
int maps[51][51] = { 0, };
int cmap[51][51] = { 0, };
vector<pair<pair<int, int>, int>> v;
int A[51] = { 0, };
int ans = 5001;


void calA(int tmap[51][51]){

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			A[i] += tmap[i][j];
		}
	}

}


void turn_map(int x, int y, int t) {
	/*
	if (x - t<1 || y - t<1 || x + t> n || y + t > m) {
	return;
	}*/
	for (int ran = 1; ran <= t; ran++) {
		//맨 위 왼쪽 좌표
		int left_tmp = cmap[x - ran][y - ran];

		//좌 세로 
		for (int i = x - ran; i < x + ran; i++) {
			cmap[i][y - ran] = cmap[i + 1][y - ran];
		}

		//밑 변하는 것 y
		for (int i = y - ran; i < y + ran; i++) {
			cmap[x + ran][i] = cmap[x + ran][i + 1];
		}

		//우 세로 변하는 것 x
		for (int i = x + ran; i > x - ran; i--) {
			cmap[i][y + ran] = cmap[i - 1][y + ran];
		}

		//위쪽 변하는 것 y 
		for (int i = y + ran; i > y - ran; i--) {
			cmap[x - ran][i] = cmap[x - ran][i - 1];
		}

		cmap[x - ran][y - ran + 1] = left_tmp;

	}

	//printf("행렬\n");
	//for (int i = 1; i <= n; i++){
	//	for (int j = 1; j <= m; j++){
	//		printf("%d ", cmap[i][j]);
	//	}
	//	printf("\n");
	//}
}



int main(){
	scanf("%d %d %d", &n, &m, &k);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	for (int i = 0; i < k; i++){
		int tmp1, tmp2, tmp3;
		scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
		v.push_back(make_pair(make_pair(tmp1, tmp2), tmp3));
	}
	
	// 입력 완료

	//next permutation을 위한 sort
	sort(v.begin(), v.end());
	
	do{
		// 초기화
		memset(A, 0, sizeof(A));
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cmap[i][j] = maps[i][j];
			}
		}
		// 회전 ( maps -> cmap에 회전된값 계산)

		for (int i = 0; i < v.size(); i++){
			int r = v[i].first.first;
			int c = v[i].first.second;
			int s = v[i].second;

			turn_map(r, c, s);

		}
		

		// A 배열 계산
		calA(cmap);

		// 최소값 구하기
		for (int a = 1; a <= n; a++){
			if (A[a] < ans) ans = A[a];
		}

		// 회전 끝

	} while (next_permutation(v.begin(), v.end()));

	printf("%d", ans);

	return 0;
}