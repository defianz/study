


#include <stdio.h>
#include <algorithm>
#include <queue>
#include <cstring>
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
			p[ctop] = (p[ctop] + 1) % 8;
			if (ctop == 2 || ctop == 3){
				if (top[ctop][(p[ctop] + 2) % 8] != top[ctop + 1][(p[ctop + 1] + 6) % 8]){
					rotate(ctop + 1, 1);
				}
				if (top[ctop][(p[ctop] + 6) % 8] != top[ctop - 1][(p[ctop - 1] + 2) % 8]){
					rotate(ctop - 1, 1);
				}
			}
			else if (ctop == 1){
				if (top[1][(p[1] + 2) % 8] != top[2][(p[2] + 6) % 8]){
					rotate(2, 1);
				}
			}
			else {
				if (top[4][(p[4] + 6) % 8] != top[3][(p[3] + 2) % 8]){
					rotate(3, 1);
				}
			}
		}
		else {
			p[ctop] = (p[ctop] + 7) % 8;
			if (ctop == 2 || ctop == 3){
				if (top[ctop][(p[ctop] + 2) % 8] != top[ctop + 1][(p[ctop + 1] + 6) % 8]){
					rotate(ctop + 1, -1);
				}
				if (top[ctop][(p[ctop] + 6) % 8] != top[ctop - 1][(p[ctop - 1] + 2) % 8]){
					rotate(ctop - 1, -1);
				}
			}
			else if (ctop == 1){
				printf("������ ctop�� %d\n", p[ctop]);
				printf("���� ���� %d %d �����ʹ� %d\n", top[ctop][(p[ctop] + 2) % 8], top[ctop + 1][(p[ctop + 1] + 6) % 8], p[ctop + 1]);
				if (top[1][(p[1] + 2) % 8] != top[2][(p[2] + 6) % 8]){
					rotate(2, -1);
				}
			}
			else {
				if (top[ctop][(p[ctop] + 6) % 8] != top[ctop - 1][(p[ctop - 1] + 2) % 8]){
					rotate(3, -1);
				}
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

	// �Է� �Ϸ�

	// ȸ�� ����

	for (int i = 0; i < k; i++){
		int ctop = m[i].first;
		int cdir = m[i].second;
		fill(visited + 1, visited + 5, false);
		// ��ɾ �ʱ�ȭ

		rotate(ctop, cdir);
	}

	// ���� �Ϸ�
	for (int i = 1; i <= 4; i++){
		printf("%d ",p[i]);
	}
	printf("\n");

	// ���� �Ϸ�
	for (int i = 1; i <= 4; i++){
		printf("%d ", top[i][p[i]]);
	}
	printf("\n");


	// ��� ���
	for (int i = 1; i <= 4; i++){
		if (top[i][p[i]] == 1) ans += pow(2, (i-1));
	}
	printf("%d", ans);

	return 0;
}