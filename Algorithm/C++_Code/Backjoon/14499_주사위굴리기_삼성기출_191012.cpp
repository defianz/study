


#include <stdio.h>
#include <cstring>


int joo[6] = { 0, };
int tmp[6] = { 0, };

int n, m, x, y, k;
int maps[20][20];
int myung[1001];
// 0���� 19����
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };


int main(){
	scanf("%d %d %d %d %d", &n, &m, &x, &y, &k);

	// �� 0���� n-1 , m-1 ���� �ε���
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			scanf("%d", &maps[i][j]);
		}
	}

	// ��ɾ� 0���� ����
	for (int i = 0; i < k; i++){
		scanf("%d", &myung[i]);
	}

	// �Է� �Ϸ�

	// ���� ����
	int nx, ny;
	for (int index = 0; index < k; index++){
		// ���� ��ǥ ���ϱ�
		nx = x + dx[myung[index] - 1];
		ny = y + dy[myung[index] - 1];
		if (0 > nx || n - 1 < nx || 0 > ny || m - 1 < ny){
			continue;
		}
		// ���� ��ǥ�� �ν� �Ϸ�

		// ������� �Ű� �ֻ��� ���ġ
		memset(tmp, 0, sizeof(tmp));
		// 1.����
		if (myung[index] == 1){
			tmp[0] = joo[1];
			tmp[1] = joo[5];
			tmp[2] = joo[0];
			tmp[3] = joo[3];
			tmp[4] = joo[4];
			tmp[5] = joo[2];
		}
		// 2. ����
		else if (myung[index] == 2){
			tmp[0] = joo[2];
			tmp[1] = joo[0];
			tmp[2] = joo[5];
			tmp[3] = joo[3];
			tmp[4] = joo[4];
			tmp[5] = joo[1];	
		} 
		// 3. ����
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
		// �����̴°� �Ϸ�

		// �ظ� ����
		if (maps[nx][ny] == 0){
			maps[nx][ny] = joo[0];
		}
		else {
			joo[0] = maps[nx][ny]; 
			maps[nx][ny] = 0;
		}
		// �ظ� ���� �Ϸ�

		x = nx; y = ny;

		printf("%d\n", joo[5]);
	}



	// ���� �Ϸ�


	return 0;
}


