


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

	// �Է� �Ϸ�

	// ���� ����

	// cnt �� ī��Ʈ��, ans�� -1��
	int cnt = 0;
	int ans = -1;
	
	// ��ȭ ������ �뵵
	bool flag = true;

	while (cnt++<1000 && flag){
		// ��ȭ ������ false�� ������
		flag = false;
		
		// �ϳ��� �����̱� ����
		for (int i = 1; i <= k; i++){
			// ���� �ƴ� ���
			c[]




		}


		// 4���̻� �׿����� üũ
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= n; j++){
				if (q[i][j].size() >= 4){
					ans = cnt;
					flag = false;				
				}
			}
		}
		// 4���̻� �׿����� üũ �� ==> while �� ������

	}

	printf("%d", ans);

	return 0;
}