


#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int ans = 2501;

int n, m;

vector<pair<int, int>> c;
vector<pair<int, int>> v;
pair<int, int> choose[2501];
bool visited[2501];

void bp(int start, int cnt){
	if (cnt == m){
		int sum = 0;

		for (int i = 0; i < c.size(); i++){
			int tmp = 2501;
			for (int j = 0; j < m; j++){
				tmp = min(tmp, abs(c[i].first - choose[j].first) + abs(c[i].second - choose[j].second));
			}
			sum += tmp;
		}
		ans = min(ans, sum);
	}


	for (int i = start; i < v.size(); i++){
		if (visited[i] == false){
			visited[i] = true;
			choose[cnt] = v[i];
			bp(i+1,cnt+1);
			visited[i] = false;
		}
	}

}


int main(){

	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			int tmp;
			scanf("%d", &tmp);
			if (tmp == 1) c.push_back(make_pair(i, j));
			if (tmp == 2) v.push_back(make_pair(i, j));
		}
	}

	bp(0, 0);

	printf("%d", ans);

	return 0;
}