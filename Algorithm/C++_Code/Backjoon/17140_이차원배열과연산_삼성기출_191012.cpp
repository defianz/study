


#include <stdio.h>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int r, c, k;
int a[101][101];
int ans = 0;
bool flag = true;;
int tmp[101];
int cmap[101][101];
vector<pair<int, int>> v;


void calcans(int ro, int co){
	/*printf("ro ; %d / co : %d\n",ro,co);
	for (int i = 1; i <= 20; i++){
		for (int j = 1; j <= 20; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/

	if (a[r][c] == k){
		//printf("���� 1�ܰ�ɸ�\n");
		return;
	}
	else if (ans > 100){
		//printf("���� 2�ܰ�ɸ�\n");
		flag = false;
		return;
	}

	int nr, nc;

	if (ro >= co){
		memset(cmap, 0, sizeof(cmap));
		nc = 0;
		nr = ro;

		for (int i = 1; i <= ro; i++){
			// �ึ�� �ʱ�ȭ
			memset(tmp, 0, sizeof(tmp));
			v.clear();

			//printf("a ��� \n");
			for (int j = 1; j <= co; j++){
				//printf("%d ", a[i][j]);
				tmp[a[i][j]] = tmp[a[i][j]]+1; 
			}
		/*	printf("\n");*/

			
			for (int j = 1; j <= 100; j++){
				if (tmp[j] > 0){
					v.push_back(make_pair(tmp[j],j ));
				}
			}

			sort(v.begin(), v.end());

			/*printf("%d ��° ���� �Դϴ�.\n",i);
			for (int j = 0; j < v.size(); j++){
				printf("v[j]�� (first,second) �� ( %d , %d )  \n", v[j].first,v[j].second);
			}*/

			for (int j = 0; j < v.size(); j++){
				cmap[i][2*j + 1] = v[j].second;
				cmap[i][2*j + 2] = v[j].first;
			}

			for (int j = 1; j <= 100; j++){
				a[i][j] = cmap[i][j];
			}
			nc = max(nc, (int)(v.size()*2));
		}
	}
	else {
		memset(cmap, 0, sizeof(cmap));
		nr = 0;
		nc = co;
		//printf("��𰡹���1\n");
		for (int i = 1; i <= co; i++){
			memset(tmp, 0, sizeof(tmp));
			v.clear();

			for (int j = 1; j <= ro; j++){
				tmp[a[j][i]] = tmp[a[j][i]] + 1;
			}

			for (int j = 1; j <= 100; j++){
				if (tmp[j] > 0){
					v.push_back(make_pair(tmp[j], j));
				}
			}
			//printf("��𰡹���2\n");
			sort(v.begin(), v.end());

			for (int j = 0; j < v.size(); j++){
				cmap[2 * j + 1][i] = v[j].second;
				cmap[2 * j + 2][i] = v[j].first;
			}

			for (int j = 1; j <= 100; j++){
				a[j][i] = cmap[j][i];
			}
			//printf("��𰡹���3\n");
			nr = max(nr, (int)(v.size()*2));
			
		}
	}
	/*printf("��Ʈ ro ; %d / co : %d\n", ro, co);
	for (int i = 1; i <= 20; i++){
		for (int j = 1; j <= 20; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}*/
	ans++;
	//printf("���������");	
	calcans(nr, nc);
}


int main(){

	scanf("%d %d %d", &r, &c, &k);
	for (int i = 1; i < 4; i++){
		for (int j = 1; j < 4; j++){
			scanf("%d", &a[i][j]);
		}
	}

	calcans(3, 3);


	if (flag){
		printf("%d", ans);
	}
	else {
		printf("-1");
	}


	return 0;
}