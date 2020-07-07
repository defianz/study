


#include <stdio.h>
#include <cstring>


int joo[6] = { 0, };
int tmp[6] = { 0, };

int n, m, x, y, k;
int maps[20][20];
int myung[1001];
// 0부터 19까지
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };


int main(){
	scanf("%d %d %d %d %d", &n, &m, &x, &y, &k);

	// 맵 0부터 n-1 , m-1 까지 인덱스
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	// 명령어 0부터 저장
	for (int i = 0; i < k; i++){
		scanf("%d", &myung[i]);
	}

	// 입력 완료

	// 연산 시작
	int nx, ny;
	for (int index = 0; index < k; index++){
		// 다음 좌표 구하기
		nx = x + dx[myung[index] - 1];
		ny = y + dy[myung[index] - 1];
		if (0 > nx || n - 1 < nx || 0 > ny || m - 1 < ny){
			continue;
		}
		// 다음 좌표로 인식 완료

		// 방향따라 옮겨 주사위 재배치
		memset(tmp, 0, sizeof(tmp));
		// 1.동쪽
		if (myung[index] == 1){
			tmp[0] = joo[1];
			tmp[1] = joo[5];
			tmp[2] = joo[0];
			tmp[3] = joo[3];
			tmp[4] = joo[4];
			tmp[5] = joo[2];
		}
		// 2. 서쪽
		else if (myung[index] == 2){
			tmp[0] = joo[2];
			tmp[1] = joo[0];
			tmp[2] = joo[5];
			tmp[3] = joo[3];
			tmp[4] = joo[4];
			tmp[5] = joo[1];	
		} 
		// 3. 북쪽
		else if (myung[index] == 3){
			tmp[0] = joo[3];
			tmp[1] = joo[1];
			tmp[2] = joo[2];
			tmp[3] = joo[5];
			tmp[4] = joo[0];
			tmp[5] = joo[4];
		}
		else {
			tmp[0] = joo[4];
			tmp[1] = joo[1];
			tmp[2] = joo[2];
			tmp[3] = joo[0];
			tmp[4] = joo[5];
			tmp[5] = joo[3];
		}

		for (int i = 0; i < 6; i++){
			joo[i] = tmp[i];
			//printf("%d ", joo[i]);
		}
		//printf("\n");
		// 움직이는거 완료

		// 밑면 복사
		if (maps[nx][ny] == 0){
			maps[nx][ny] = joo[0];
		}
		else {
			joo[0] = maps[nx][ny]; 
			maps[nx][ny] = 0;
		}
		// 밑면 복사 완료

		x = nx; y = ny;

		printf("%d\n", joo[5]);
	}



	// 연산 완료


	return 0;
}


