

#include <stdio.h>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;

struct shark{
	int x;
	int y;
	int dir;
	int vel;
	int size;
	int sindex;
};


int r, c, m, ans = 0;
vector<shark> sharks(10002);
int tmp[101][101] = { 0, };
int tmpindex;

void moveshark(){

	memset(tmp, 0, sizeof(tmp));

	for (int i = 0; i < m; i++){

		if (sharks[i].size != 0){
			if (sharks[i].dir == 2){
				int tmp = sharks[i].x + sharks[i].vel -1;
				int a = tmp / (r - 1); int b = tmp % (r - 1);
				if (a % 2 == 0){
					sharks[i].x = b + 1;
				}
				else {
					sharks[i].x = r - b;
					sharks[i].dir = 1;
				}
			}
			else if (sharks[i].dir == 1) {
				int tmp = sharks[i].x - sharks[i].vel -1;
				if (tmp <= 0){
					tmp = -1 * tmp;
				}
				int a = tmp / (r - 1); int b = tmp % (r - 1);
				if (a % 2 == 0){
					sharks[i].x = b + 1;
					sharks[i].dir = 2;
				}
				else {
					sharks[i].x = r - b;
				}
			}
			else if (sharks[i].dir == 3){
				int tmp = sharks[i].y + sharks[i].vel -1;
				int a = tmp / (c - 1); int b = tmp % (c - 1);
				if (a % 2 == 0){
					sharks[i].y = b + 1;
				}
				else {
					sharks[i].y = c - b;
					sharks[i].dir = 4;
				}
			}
			else if (sharks[i].dir ==4) {
				int tmp = sharks[i].y - sharks[i].vel -1;
				if (tmp <= 0){
					tmp = -1 * tmp;
				}
				int a = tmp / (c - 1); int b = tmp % (c - 1);
				if (a % 2 == 0){
					sharks[i].y = b + 1;
					sharks[i].dir = 3;
				}
				else{
					sharks[i].y = c - b;
				}
			}

			int a = sharks[i].x;
			int b = sharks[i].y;
			int c = sharks[i].size;

			if (c > tmp[a][b] && tmp[a][b] !=0){
				sharks[tmpindex].size = 0;
				tmp[a][b] = c;
				tmpindex = sharks[i].sindex;
			}
			else if (c > tmp[a][b]){
				tmp[a][b] = c;
				tmpindex = sharks[i].sindex;
			}
			else {
				sharks[i].size = 0;
			}
			
		}
	}
}

int main(){

	scanf("%d %d %d", &r, &c, &m);



	for (int i = 0; i < m; i++){
		scanf("%d %d %d %d %d", &sharks[i].x, &sharks[i].y, &sharks[i].vel, &sharks[i].dir, &sharks[i].size);
		sharks[i].sindex = i;
		//printf("���� %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);
	}



	for (int time = 1; time <= c; time++){
		//printf("##### �ð��� : %d\n", ktime);


		//# ��ΰ� ����
		int lowx = r + 1;
		int index = m + 1;
		for (int i = 0; i < m; i++){
			if (time == sharks[i].y && lowx > sharks[i].x&& sharks[i].size != 0){
				lowx = sharks[i].x;
				index = i;
			}
		}
		//printf("�������� : %d\n", index);
		ans += sharks[index].size;
		sharks[index].size = 0;
//
//		f/*or (int i = 0; i < m; i++){
//			printf("������ ���� %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);
//		}
//*/

		//# ��� �̵�

		moveshark();
	/*	for (int i = 0; i < m; i++){
			printf("�̵��� ���� %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);
		}*/

		//# ��� ��Ƹ���

		//queue<shark> q[101][101];
		//for (int i = 0; i < m; i++){
		//	if (sharks[i].size != 0){
		//		q[sharks[i].x][sharks[i].y].push(sharks[i]);
		//		//printf("q[a][b] ������� : %d %d %d", sharks[i].x, sharks[i].y, q[sharks[i].x][sharks[i].y].size());
		//	}
		//}

		//for (int a = 0; a < 101; a++){
		//	for (int b = 0; b < 101; b++){
		//		if (q[a][b].size() >1){
		//			int maxsize = 0;
		//			while (q[a][b].size() != 1){
		//				shark tsha = q[a][b].front();
		//				q[a][b].pop();
		//				if (maxsize <= tsha.size){
		//					maxsize = tsha.size;
		//					q[a][b].push(tsha);
		//				}
		//				else {
		//					int catindex = tsha.sindex;
		//					sharks[catindex].size = 0;
		//				}
		//			}
		//		}
		//	}
		//}



		//int map[101][101];

		//for (int a = 0; a < 101; a++){
		//	for (int b = 0; b < 101; b++){
		//		map[a][b] = 0;
		//	}
		//}


		//int tmp[101][101];

		//for (int a = 0; a < 101; a++){
		//	for (int b = 0; b < 101; b++){
		//		tmp[a][b]  = 10001;
		//	}
		//}
		//
		//
		//for (int i = 0; i < m; i++){
		//	if (sharks[i].size != 0){
		//		if (map[sharks[i].x][sharks[i].y] < sharks[i].size){
		//			map[sharks[i].x][sharks[i].y] = sharks[i].size;
		//			sharks[tmp[sharks[i].x][sharks[i].y]].size = 0;
		//			//printf("1�� �ͼ� x,y�� : %d, %d\n", sharks[i].x,sharks[i].y);/*
		//			//printf("1�� �ͼ� tmp[sharks[i].x][sharks[i].y] : %d\n", tmp[sharks[i].x][sharks[i].*/y]);
		//			tmp[sharks[i].x][sharks[i].y] = i;

		//		}
		//		else if (map[sharks[i].x][sharks[i].y] > sharks[i].size) {
		//			sharks[i].size = 0;
		//			//printf("�Ϸο���2222");
		//		}
		//	}
		//}

	/*	for (int i = 0; i < m; i++){
			printf("��Ƹ����� ���� %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);

		}
*/



		//for (int i = 0; i < m; i++){
		//	if (i != m - 1){
		//		for (int j = i + 1; j < m; j++){
		//			if (sharks[i].x == sharks[j].x && sharks[i].y == sharks[j].y){
		//				if (sharks[i].size > sharks[j].size){
		//					sharks[j].size = 0;
		//				}
		//				else {
		//					sharks[i].size = 0;
		//				}
		//			}
		//		}
		//	}
		//}



/*
		for (int i = 0; i < m; i++){
			printf("���� %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);
		}
		printf("�� ������� : %d\n", ans);*/

	}

	printf("%d", ans);
	return 0;
}