


#include <stdio.h>
#include <algorithm>
#include <queue>
#include <cstring>
#include <math.h>
using namespace std;

int top[5][8];
int k;
pair<int, int> m[101];
int p[5];
queue<int> q;
int ans;

bool visited[5] = { false, };

void rotate(int ctop, int cdir){
	if (visited[ctop] == true) return;
	else{
		visited[ctop] = true;
		if (cdir == -1){
			if (ctop == 2 || ctop == 3){
				bool flag1 = false;
				bool flag2 = false;
				if (top[ctop][(p[ctop] + 2) % 8] != top[ctop + 1][(p[ctop + 1] + 6) % 8]){
					flag1 = true;
				}
				if (top[ctop][(p[ctop] + 6) % 8] != top[ctop - 1][(p[ctop - 1] + 2) % 8]){
					flag2 = true;
				}
				p[ctop] = (p[ctop] + 1) % 8;
				if (flag1) rotate(ctop + 1, 1);
				if (flag2) rotate(ctop - 1, 1);
			}
			else if (ctop == 1){
				bool flag3 = false;
				if (top[1][(p[1] + 2) % 8] != top[2][(p[2] + 6) % 8]){
					flag3 = true;
				}
				p[ctop] = (p[ctop] + 1) % 8;
				if (flag3) rotate(2, 1);
		
			}
			else {
				bool flag4 = false;
				if (top[4][(p[4] + 6) % 8] != top[3][(p[3] + 2) % 8]){
					flag4 = true;
				}
				p[ctop] = (p[ctop] + 1) % 8;
				if (flag4) rotate(3, 1);
			}
		}
		else {
			if (ctop == 2 || ctop == 3){ 
				bool flag1 = false;
				bool flag2 = false;
				if (top[ctop][(p[ctop] + 2) % 8] != top[ctop + 1][(p[ctop + 1] + 6) % 8]){
					flag1 = true;
					
				}
				if (top[ctop][(p[ctop] + 6) % 8] != top[ctop - 1][(p[ctop - 1] + 2) % 8]){
					flag2 = true;					
				}
				p[ctop] = (p[ctop] + 7) % 8;
				if (flag1) rotate(ctop + 1, -1);
				if (flag2) rotate(ctop - 1, -1);
			}
			else if (ctop == 1){
				bool flag3 = false;
				if (top[1][(p[1] + 2) % 8] != top[2][(p[2] + 6) % 8]){	
					flag3 = true;
				}
				p[ctop] = (p[ctop] + 7) % 8;
				if (flag3) rotate(2, -1);
			}
			else {
				bool flag4 = false;
				if (top[4][(p[4] + 6) % 8] != top[3][(p[3] + 2) % 8]){
					flag4 = true;
				}
				p[ctop] = (p[ctop] + 7) % 8;
				if (flag4) rotate(3, -1);
			}
		}
		return;
	}
}


int main(){
	for (int i = 1; i <= 4; i++){
		for (int j = 0; j < 8; j++){
			scanf("%1d", &top[i][j]);
		}
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++){
		int tmp1, tmp2;
		scanf("%d %d", &tmp1, &tmp2);
		m[i] = make_pair(tmp1, tmp2);
	}

	// 입력 완료

	// 회전 시작

	for (int i = 0; i < k; i++){
		int ctop = m[i].first;
		int cdir = m[i].second;
		memset(visited, false, sizeof(visited));
		// 명령어별 초기화

		rotate(ctop, cdir);


		//printf("%d번째 결과값 디버깅 \n",i);
		//for (int i = 1; i <= 4; i++){
		//	//printf("%d \n", p[i]);
		//	for (int j = p[i]; j < p[i] + 8; j++){
		//		printf("%d ", top[i][j % 8]);
		//	}
		//	printf("\n");
		//}
		//printf("\n");

	}

	// 연산 완료

	

	// 결과 계산
	for (int i = 1; i <= 4; i++){
		if (top[i][p[i]] == 1) ans += pow(2, (i-1));
	}
	printf("%d", ans);

	return 0;
}