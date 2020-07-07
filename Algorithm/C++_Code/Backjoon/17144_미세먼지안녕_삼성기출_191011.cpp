


#include <stdio.h>
#include <vector>
using namespace std;

int r, c, t;
int maps[51][51];
int dy[4] = { 1, 0, -1, 0 };
int dx[4] = { 0, 1, 0, -1 };
vector<int> gong;

int main(){
	scanf("%d %d %d", &r, &c, &t);
	
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			scanf("%d", &maps[i][j]);
		}
		if (maps[i][1] == -1) gong.push_back(i);
	}


	for (int time = 1; time <= t; time++){
		int cmap[51][51] = { 0, };

		// ���� ������ ���� �� Ž��
		for (int i = 1; i <= r; i++){
			for (int j = 1; j <= c; j++){
				// ���� ������
				if (maps[i][j] > 0){
					int cnt = 0;
					for (int dir = 0; dir < 4; dir++){
						int ny = i + dy[dir];
						int nx = j + dx[dir];
						if (0 < nx && nx <= c && 0 < ny && ny <= r && maps[ny][nx] != -1){
							cmap[ny][nx] = cmap[ny][nx] + maps[i][j]/5;
							cnt++;
						}
					}
					cmap[i][j] = cmap[i][j] + maps[i][j] - (maps[i][j] / 5 * cnt);
				}
				// ���� ������ ��
			}
		}
		// ���� ������ ���� �� Ž�� ��

		// �����
	/*	printf("����������\n");
		for (int i = 1; i <= r; i++){
			for (int j = 1; j <= c; j++){
				printf("%d ", cmap[i][j]);
			}
			printf("\n");
		}*/
		// �����




		// ����û���� �۵� - ������
		for (int i = gong[0] - 1; i > 1; i--){
			cmap[i][1] = cmap[i - 1][1];
		}
		for (int i = 1; i < c; i++){
			cmap[1][i] = cmap[1][i + 1];
		}
		for (int i = 1; i < gong[0]; i++){
			cmap[i][c] = cmap[i + 1][c];
		}
		for (int i = c; i > 2; i--){
			cmap[gong[0]][i] = cmap[gong[0]][i - 1];
		}
		cmap[gong[0]][2] = 0;
		// ����û���� ���� - ������
		
		// ����û���� �۵� - �Ʒ�����
		for (int i = gong[1] + 1; i < r; i++){
			cmap[i][1] = cmap[i + 1][1];
		}
		for (int i = 1; i < c; i++){
			cmap[r][i] = cmap[r][i + 1];
		}
		for (int i = r; i > gong[1]; i--){
			cmap[i][c] = cmap[i - 1][c];
		}
		for (int i = c; i > 2; i--){
			cmap[gong[1]][i] = cmap[gong[1]][i - 1];
		}
		cmap[gong[1]][2] = 0;
		
		memcpy(maps, cmap, sizeof(cmap));

	}
	// �����
	//printf("���� ��\n"); 

	//for (int i = 1; i <= r; i++){
	//	for (int j = 1; j <= c; j++){
	//		printf("%d ", maps[i][j]);
	//	}
	//	printf("\n");
	//}
	// �����


	// �� �̱�
	int ans = 0;
	for (int i = 1; i <= r; i++){
		for (int j = 1; j <= c; j++){
			if (maps[i][j] > 0) ans += maps[i][j];
		}
	}




	printf("%d", ans);
	// �� ��

	return 0;
}
