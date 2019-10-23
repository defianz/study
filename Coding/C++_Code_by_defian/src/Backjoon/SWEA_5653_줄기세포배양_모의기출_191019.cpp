


#include <stdio.h>
#include <vector>
#include <cstring>


using namespace std;


struct sepo{
	int r;
	int c;
	int x;
	int g;
};

int testcase;

int n,m,k;
int maps[600][600];
int cmaps[600][600];


int dr[4] = { -1, 0, 1, 0 };
int dc[4] = { 0, 1, 0, -1 };
bool visited[600][600] = { false, };
int main(){

	scanf("%d", &testcase);


	for (int t = 1; t <= testcase; t++){
		// �׽�Ʈ ���̽� ����
		//�ʱ�ȭ
		memset(maps, 0, sizeof(maps));

		int ans = 0;
		vector<sepo> alive;
		vector<sepo> wait;
		vector<sepo> wait2;
		
		
		// �Է¹ޱ�
		scanf("%d %d %d", &n, &m, &k);
		for (int i = 300; i < 300 + n; i++){
			for (int j = 300; j < 300 + m; j++){
				scanf("%d", &maps[i][j]);
				if (maps[i][j] != 0){
					wait.push_back(sepo{ i, j, maps[i][j],0 });
				}
			}
		}


		
		memcpy(cmaps, maps, sizeof(cmaps));

		// k �ð� ���� (0�ʺ��� ����)
		for (int time = 0; time < k; time++){
			memset(visited, false, sizeof(visited));



			// Ȱ��ȭ�� �ֵ� ���� ��Ű��
			for (int i = 0; i < alive.size(); i++){
				sepo cs = alive[i];
				int cr = cs.r;
				int cc = cs.c;
				int x = cs.x;

				for (int dir = 0; dir < 4; dir++){
					int nr = cr + dr[dir];
					int nc = cc + dc[dir];
					if (cmaps[nr][nc] == 0 || ( cmaps[nr][nc] < x && visited[nr][nc])){
						cmaps[nr][nc] = x;
						visited[nr][nc] = true;
						wait2.push_back(sepo{ nr, nc, x, 0 });
					}

				}

			}


			// Ȱ��ȭ�� ���߿� �������� ���̱�

			for (int i = 0; i < alive.size(); i++){
				alive[i].g--;
				if (alive[i].g == 0){
					alive.erase(alive.begin()+ i);
					i--;
				}
			}


			// ��⿡�� Ȱ��ȭ ��Ű��
			for (int i = 0; i < wait.size(); i++){
				wait[i].g++;
				if (wait[i].g == wait[i].x){
					alive.push_back(wait[i]);
					wait.erase(wait.begin()+i);
					i--;
				}
			}

			for (int i = 0; i < wait2.size(); i++){
				wait.push_back(wait2[i]);
			}
			wait2.clear();


			//  �����
			/*printf("����� %d \n", time);
			for (int i = 290; i < 310 ; i++){
				for (int j = 290; j < 310; j++){
					printf("%d ", maps[i][j]);
				}
				printf("\n");
			}*/

		}

		




		// ���� �� ����
		ans += wait.size();
		ans += alive.size();


		// ���

		printf("#%d %d\n", t, ans);


		// �׽�Ʈ ���̽� ����
	}
	

	return 0;
}