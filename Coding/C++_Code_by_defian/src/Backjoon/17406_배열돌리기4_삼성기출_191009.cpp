

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
		//�� �� ���� ��ǥ
		int left_tmp = cmap[x - ran][y - ran];

		//�� ���� 
		for (int i = x - ran; i < x + ran; i++) {
			cmap[i][y - ran] = cmap[i + 1][y - ran];
		}

		//�� ���ϴ� �� y
		for (int i = y - ran; i < y + ran; i++) {
			cmap[x + ran][i] = cmap[x + ran][i + 1];
		}

		//�� ���� ���ϴ� �� x
		for (int i = x + ran; i > x - ran; i--) {
			cmap[i][y + ran] = cmap[i - 1][y + ran];
		}

		//���� ���ϴ� �� y 
		for (int i = y + ran; i > y - ran; i--) {
			cmap[x - ran][i] = cmap[x - ran][i - 1];
		}

		cmap[x - ran][y - ran + 1] = left_tmp;

	}

	//printf("���\n");
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
	
	// �Է� �Ϸ�

	//next permutation�� ���� sort
	sort(v.begin(), v.end());
	
	do{
		// �ʱ�ȭ
		memset(A, 0, sizeof(A));
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cmap[i][j] = maps[i][j];
			}
		}
		// ȸ�� ( maps -> cmap�� ȸ���Ȱ� ���)

		for (int i = 0; i < v.size(); i++){
			int r = v[i].first.first;
			int c = v[i].first.second;
			int s = v[i].second;

			turn_map(r, c, s);

		}
		

		// A �迭 ���
		calA(cmap);

		// �ּҰ� ���ϱ�
		for (int a = 1; a <= n; a++){
			if (A[a] < ans) ans = A[a];
		}

		// ȸ�� ��

	} while (next_permutation(v.begin(), v.end()));

	printf("%d", ans);

	return 0;
}