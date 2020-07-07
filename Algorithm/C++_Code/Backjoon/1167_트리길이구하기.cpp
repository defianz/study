

#include <stdio.h>
#include <vector>
using namespace std;

int v;
vector<pair<int, int>> q[100001];
int ans= 0;
int node = 0;

void dptree(int a, bool check[], int hap){
	int tt = 0;
	for (int i = 0; i < q[a].size(); i++){
		if (check[q[a][i].first] == false){
			hap += q[a][i].second;
			//printf("합해지는건 %d, %d\n",a, q[a][i].first);
			check[q[a][i].first] = true;
			dptree(q[a][i].first, check, hap);
			hap -= q[a][i].second;
			check[q[a][i].first] = false;
			tt = 1;
		}
	}
	if (tt == 0){
		//printf("끝입니다\n");
		if (hap > ans){
			ans = hap;
			node = a;
			
		}
	}
}


int main(){

	scanf("%d", &v);
	for (int i = 0; i < v; i++){
		int a1;
		scanf("%d", &a1);
		while (1){
			int a2,a3;
			scanf("%d", &a2);
			if (a2 == -1) break;
			scanf("%d", &a3);
			q[a1].push_back(make_pair(a2, a3));
		}
		

	}

	bool check[100001] = { false, };
	//for (int i = 1; i <= v; i++){
		check[1] = true;
		//printf("시작시작 : %d\n",i);
		dptree(1,check,0);
		check[1] = false;
	//}
		check[node] = true;
		dptree(node, check, 0);

	printf("%d", ans);
	//printf("잘된다");
	return 0;
}

