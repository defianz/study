

#include <stdio.h>
#include <vector>
using namespace std;

struct shark{
	int x;
	int y;
	int dir;
	int vel;
	int size;
};


int r, c, m, ans = 0;
vector<shark> sharks(10001);


void moveshark(){

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
		}
	}
}

int main(){

	scanf("%d %d %d", &r, &c, &m);



	for (int i = 0; i < m; i++){
		scanf("%d %d %d %d %d", &sharks[i].x, &sharks[i].y, &sharks[i].vel, &sharks[i].dir, &sharks[i].size);
		//printf("상어다 %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);
	}



	for (int time = 1; time <= c; time++){
		//printf("##### 시간은 : %d\n", time);


		//# 어부가 잡음
		int lowx = r + 1;
		int index = m + 1;
		for (int i = 0; i < m; i++){
			if (time == sharks[i].y && lowx > sharks[i].x&& sharks[i].size != 0){
				lowx = sharks[i].x;
				index = i;
			}
		}
		//printf("잡은상어는 : %d\n", index);
		ans += sharks[index].size;
		sharks[index].size = 0;



		//# 상어 이동

		moveshark();

		//# 상어 잡아먹힘

		int map[101][101] = { 0, };
		int tmp[101][101] = { 100001, };
		
		for (int i = 0; i < m; i++){
			if (sharks[i].size != 0){
				if (map[sharks[i].x][sharks[i].y] < sharks[i].size){
					map[sharks[i].x][sharks[i].y] = sharks[i].size;
					sharks[tmp[sharks[i].x][sharks[i].y]].size = 0;
					tmp[sharks[i].x][sharks[i].y] = i;
				}
				else if (map[sharks[i].x][sharks[i].y] > sharks[i].size) {
					sharks[i].size = 0;
				}
			}
		}




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




	/*	for (int i = 0; i < m; i++){
			printf("상어다 %d : %d %d %d %d %d \n", i, sharks[i].x, sharks[i].y, sharks[i].vel, sharks[i].dir, sharks[i].size);
		}
		printf("사이즈는 : %d\n", ans);
*/
	}

	printf("%d", ans);
	return 0;
}