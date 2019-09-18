

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

struct com{
	int w;
	int a;
	int b;
	bool operator < (const com &v) {
		if (w < v.w){
			return true;
		}
		else{
			return false;
		}
	}
};

int n, m, ans = 0;
vector<com> coms;
int parent[1001] = { 0, };


void makeset(){
	for (int i = 0; i < n; i++){
		parent[i] = i;
	}
}

int find(int a){
	if (parent[a] == a){
		return a;
	}
	return parent[a] = find(parent[a]);
}

bool merge1(int a, int b){
	int tmp1 = find(a);
	int tmp2 = find(b);
	//printf("Check\n");
	if (tmp1 == tmp2){
		return false;
	} 
	//printf("Check\n");
	parent[find(b)] = find(a);
	return true;
}


int main(){

	scanf("%d", &n);
	scanf("%d", &m);

	for (int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		coms.push_back(com{ c, a, b });
	}

	makeset();


	//printf("여기까지1\n");
	sort(coms.begin(), coms.end());
	//printf("여기까지2\n");
	for (int i = 0; i < coms.size(); i++){
		//printf("여기까지3\n");
		//printf("st1");
		int st1 = coms[i].a;
		int st2 = coms[i].b;
		int w = coms[i].w;


		if (merge1(st1, st2) == true){
			ans += w;
		}

		//if (find(st1) == find(st2)){
		//	continue;
		//}
		//else {
		//	parent[find(st1)] = find(st2);
		//	ans += w;
		//}
			

	}


	printf("%d", ans);
	return 0;
}