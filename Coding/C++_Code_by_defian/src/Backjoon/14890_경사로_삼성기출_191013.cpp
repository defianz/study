

#include <stdio.h>

int n, l;
int maps[101][101];
int cnt;
int ans;

int main(){
	scanf("%d %d", &n, &l);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &maps[i][j]);
		}
	}
	// 입력완료
	
	// 연산 시작
	// 행 연산;
	for (int i = 1; i <= n; i++){
		cnt = 1;
		for (int j = 1; j <= n; j++){
			if (j == n){
				if (cnt >= 0){
					ans++;
					//printf("해당하는 line은 %d \n", i);
				}
				break;
			}

			if (maps[i][j] == maps[i][j + 1]){
				cnt++;
			}
			else if (maps[i][j] + 1 == maps[i][j + 1]){
				if (cnt >= l){
					continue;
				}
				else {
					break;
				}
			}
			else if (maps[i][j] - 1 == maps[i][j + 1])
			{
				cnt = -l+1;
			}
			else {
				break;
			}

		}
	}
	// 행연산 완료
	
	
	// 열연산
	for (int i = 1; i <= n; i++){
		cnt = 1;
		//printf("%d 열일때\n", i);s
		for (int j = 1; j <= n; j++){
			//printf("%d 행일때 cnt는 %d \n", j, cnt);
			if (j == n){
				if (cnt >= 0){
					ans++;
					//printf("해당하는   열은 %d \n", i);
				}
				break;
			}

			if (maps[j][i] == maps[j+1][i]){
				cnt++;
			}
			else if (maps[j][i] + 1 == maps[j+1][i]){
				if (cnt >= l){
					cnt = 1;
					continue;
				}
				else {
					break;
				}
			}
			else if (maps[j][i] - 1 == maps[j+1][i])
			{
				//printf("i는 %d, j는 %d 일때 cnt는 %d \n", i, j, cnt);
				if (cnt >= 0){
					cnt = -l + 1;
					continue;
				}
				else{
					break;
				}
			}
			else {
				break;
			}

		}
	}



	// 열연산 완료

	// 연산 완료

	// 결과 출력
	printf("%d", ans);

	return 0;
}