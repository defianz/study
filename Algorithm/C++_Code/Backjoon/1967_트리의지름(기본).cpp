

#include <stdio.h>
#include <vector>
#include <memory.h>
using namespace std;


int n;
vector<pair<int, int>> q[10001];
int ans = 0;
int node = 0;

void dptree(int a, int hap, bool checks[]){
	bool end = true;
	int sz = q[a].size();
	for (int i = 0; i < sz; i++){
		if (checks[q[a][i].first] == false){
			//printf("여기서 해매나");
			//printf("일로가는중 %d, %d, 합은 %d, second는 %d \n",a, q[a][i].first,hap,q[a][i].second);
		checks[q[a][i].first] = true;
		hap += q[a][i].second;
		dptree(q[a][i].first, hap, checks);
		checks[q[a][i].first] = false;
		hap -= q[a][i].second;
		end = false;
		}
	}
	if (end == true){
		if (ans < hap){
			ans = hap;
			node = a;
			//printf("여기는 끝이다\n");
			return;
		}
	}
}


int main(){

	scanf("%d", &n);

	for (int i = 0; i < n-1; i++){
		int a, b, c = 0;
		scanf("%d %d %d",&a,&b,&c );
		q[a].push_back(make_pair(b, c));
		q[b].push_back(make_pair(a, c));
	}
	bool checks[10001] = { false, };
	checks[1] = true;
	dptree(1,0, checks);

	memset(checks, 0, sizeof(checks));

	dptree(node, 0, checks);


	printf("%d", ans);

	return 0;
}