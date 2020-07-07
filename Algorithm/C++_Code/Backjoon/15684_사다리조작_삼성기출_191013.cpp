


#include <stdio.h>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;


int n, m, h;
int maps[31][11] = { 0, };
int cmap[31][11] = { 0, };
int ans = 4;
bool flag = false;
vector<pair<int, int>> v;

bool checkans(){
	bool fflag = true;
	memcpy(cmap, maps, sizeof(cmap));
	for (int i = 1; i <= n; i++){
		int cr = 1;
		int cc = i;
		bool xflag = true;;
		while (true){
			cc = cc + cmap[cr][cc];
			cr++;
			if (cr == h + 1){
				if (cc != i){
					xflag = false;
					break;
				}
				else {
					break;
				}
			}
		}
		if (xflag == false){
			fflag = false;
			break;
		}
	}


	return fflag;
}

void bp(int cnt, int sr){
	
	if (checkans()){
		ans = min(ans, cnt);
	/*	if (cnt == 2){
			printf("cnt 값은 %d \n", cnt);
			for (int i = 1; i <= h; i++){
				for (int j = 1; j <= n; j++){
					printf("%d ", maps[i][j]);
				}
				printf("\n");
			}
		}*/

		return;
	}

	if (cnt == 3){
		return;
	}
	

	for (int i = sr; i <= h; i++){
		for (int j = 1; j <= n-1; j++){
			if (maps[i][j] == 0 && maps[i][j+1]==0){
				maps[i][j] = 1;
				maps[i][j + 1] = -1;
				bp(cnt + 1,i);
				maps[i][j] = 0;
				maps[i][j + 1] = 0;
			}
		}
		int sc = 1;
	}


}


int main(){

	scanf("%d %d %d", &n, &m, &h);
	for (int i = 0; i < m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		maps[a][b] = 1;
		maps[a][b + 1] = -1;
	}
	// 입력 완료
	
	// bp 통해 연산 시작
	bp(0,1);


	// 출력
	if (ans == 4) printf("-1");
	else{
		printf("%d",ans);
	}


	return 0;
}