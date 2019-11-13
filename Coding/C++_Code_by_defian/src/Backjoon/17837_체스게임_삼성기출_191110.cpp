


#include <stdio.h>
#include <queue>
using namespace std;

struct ch{
	int r;
	int c;
	int dir;
};

int n, k;
queue<int> q[13][13];
int maps[13][13];
ch c[11];


int main(){

	scanf("&d &d", &n, &k);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	for (int i = 1; i <= k; i++){
		int tmp1, tmp2, tmp3;
		scanf("%d %d %d", &tmp1, &tmp2, &tmp3);
		c[i].r = tmp1;
		c[i].c = tmp2;
		c[i].dir = tmp3;
	}

	// 입력 완료

	// 연산 시작

	// cnt 는 카운트용, ans는 -1로
	int cnt = 0;
	int ans = -1;
	
	// 변화 없을때 용도
	bool flag = true;

	while (cnt++<1000 && flag){
		// 변화 없으면 false로 나가짐
		flag = false;
		
		// 하나씩 움직이기 시작
		for (int i = 1; i <= k; i++){
			// 벽이 아닌 경우
			c[]




		}


		// 4개이상 쌓였는지 체크
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (q[i][j].size() >= 4){
					ans = cnt;
					flag = false;				
				}
			}
		}
		// 4개이상 쌓였는지 체크 끝 ==> while 문 나가짐

	}

	printf("%d", ans);

	return 0;
}