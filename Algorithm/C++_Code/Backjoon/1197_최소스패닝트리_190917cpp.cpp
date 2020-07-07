
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

struct node1{
	int a;
	int b;
	int w;
	bool operator < (const node1 &q){
		if (w < q.w){
			return true;
		}
		else {
			return false;
		}
	}
};

int v,e;
vector<node1> nodes;
int parent[10001];
int ans = 0;


int find(int a){

	if (parent[a] == a){
		return a;
	}

	return parent[a] = find(parent[a]);
}

bool mergenode(int a, int b){
	int tmpa = find(a);
	int tmpb = find(b);

	if (tmpa == tmpb){
		return false;
	}
	parent[tmpa] = tmpb;
	return true;
}

int main(){

	scanf("%d %d", &v, &e);
	for (int i = 0; i < e; i++){
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		nodes.push_back(node1{ a, b, c });
	}

	for (int i = 1; i <= v; i++){
		parent[i] = i;
	}

	sort(nodes.begin(), nodes.end());
	
	for (int i = 0; i < nodes.size(); i++){
		int tmp1 = nodes[i].a;
		int tmp2 = nodes[i].b;
		int w = nodes[i].w;

		if (mergenode(tmp1, tmp2)){
			ans += w;
		}


	}

	printf("%d", ans);

	return 0;
}