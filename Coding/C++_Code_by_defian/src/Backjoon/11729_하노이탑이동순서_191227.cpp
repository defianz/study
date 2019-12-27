

#include <stdio.h>
#include <vector>
using namespace std;

vector<pair<int, int>> v;


void foo(int n, int fr, int by, int to){
	if (n == 1){
		v.push_back(make_pair(fr, to));
	}
	else{
		foo(n - 1, fr, to, by);
		v.push_back(make_pair(fr, to));
		foo(n - 1, by, fr, to);
	}
}

int main(){

	int n;
	scanf("%d", &n);
	
	foo(n, 1, 2,3);

	printf("%d\n", v.size());
	for (int i = 0; i < v.size(); i++){
		printf("%d %d\n", v[i].first, v[i].second);
	}


	return 0;
}