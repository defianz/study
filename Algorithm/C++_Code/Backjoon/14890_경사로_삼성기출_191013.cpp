

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
	// �Է¿Ϸ�
	
	// ���� ����
	// �� ����;
	for (int i = 1; i <= n; i++){
		cnt = 1;
		for (int j = 1; j <= n; j++){
			if (j == n){
				if (cnt >= 0){
					ans++;
					//printf("�ش��ϴ� line�� %d \n", i);
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
	// �࿬�� �Ϸ�
	
	
	// ������
	for (int i = 1; i <= n; i++){
		cnt = 1;
		//printf("%d ���϶�\n", i);s
		for (int j = 1; j <= n; j++){
			//printf("%d ���϶� cnt�� %d \n", j, cnt);
			if (j == n){
				if (cnt >= 0){
					ans++;
					//printf("�ش��ϴ�   ���� %d \n", i);
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
				//printf("i�� %d, j�� %d �϶� cnt�� %d \n", i, j, cnt);
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



	// ������ �Ϸ�

	// ���� �Ϸ�

	// ��� ���
	printf("%d", ans);

	return 0;
}