

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n,point,ans;
int inning1[10];
int inning2[10];
int tasoon[10];
int tmp[8] = { 2, 3, 4, 5, 6, 7, 8, 9 };
int maps[51][10];

int main(){

	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= 9; j++){
			scanf("%d", &maps[i][j]);
		}
	}
	

	do{
	/*	printf("tmp���� : ");
		for (int i = 0; i < 8; i++){
			printf("%d ", tmp[i]);
		}
		printf("\n");*/
		// �� Ž���ϱ�
		for (int i = 1; i <= 3; i++){
			tasoon[i] = tmp[i-1];
		}
		tasoon[4] = 1;
		for (int i = 5; i <= 9; i++){
			tasoon[i] = tmp[i-2];
		}
		// ������� ��


		//�̴� ������
		int start = 1;
		point = 0;
		for (int round = 1; round <= n; round++){


			// �̴� �ʱⱸ��
			int outcnt = 0;
			bool base[4] = { false, };
			bool flag = true;
			// �̴� �ʱⱸ�� ��

			// �̴� ����
			//printf("�̴׽��� : %d\n", round);

			while (flag){
				//printf("���ѷ���\n");
				for (int i = start; i <= 9; i++){
					//printf("Ÿ�� : %d, ��� %d\n", i, maps[round][tasoon[i]]);
					if (maps[round][tasoon[i]] == 0){
						outcnt++;

						if (outcnt == 3) {
							if (i == 9){
								start = 1;
							}
							else {
								start = i+1;
							}
							flag = false;
							break;
						}
					}
					else if (maps[round][tasoon[i]] == 1){
						if (base[3] == true){
							point++;
							base[3] = false;
						}
						if (base[2] == true){
							base[3] = true;
							base[2] = false;
						}
						if (base[1] == true){
							base[2] = true;
							base[1] = false;
						}
						base[1] = true;
					}
					else if (maps[round][tasoon[i]] == 2){
						if (base[3] == true){
							point++;
							base[3] = false;
						}
						if (base[2] == true){
							point++;
							base[2] = false;
						}
						if (base[1] == true){
							base[3] = true;
							base[1] = false;
						}
						base[2] = true;
					}
					else if (maps[round][tasoon[i]] == 3){
						if (base[3] == true){
							point++;
							base[3] = false;
						}
						if (base[2] == true){
							point++;
							base[2] = false;
						}
						if (base[1] == true){
							point++;
							base[1] = false;
						}
						base[3] = true;
					}
					else {
						if (base[3] == true){
							point++;
							base[3] = false;
						}
						if (base[2] == true){
							point++;
							base[2] = false;
						}
						if (base[1] == true){
							point++;
							base[1] = false;
						}
						point++;
					}
					if (i == 9){
						start = 1;
					}

				}

			}
		}
			// �̴� ��

	//�̴׵����� ��
		if (point > ans) ans = point;
	} while (next_permutation(tmp, tmp+8));

	printf("%d", ans);

	return 0;
}