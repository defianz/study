#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int n, m;
int w[21][21];
int ans = 10001;
bool ok[21] = { false, };


int score(vector<int> xx){
	int suma = 0;
	for (int i = 0; i < xx.size(); i++){
		for (int j = i + 1; j < xx.size(); j++){
			suma += w[xx[i]][xx[j]] + w[xx[j]][xx[i]];
		}
	}
	return suma;
}

void bp(int start, int count){
	if (count == m){
		vector<int> a;
		vector<int> b;
		for (int i = 1; i <= n; i++){
			if (ok[i] == false){
				a.push_back(i);
			}
			else {
				b.push_back(i);
			}
		}
		int dif = abs(score(a) - score(b));
		ans = min(ans, dif);
		return;
	}
	for (int i = start; i <= n; i++){
		if (ok[i] == false){
			ok[i] = true;
			bp(i+1, count + 1);
			ok[i] = false;
		}
	}

}


int main(){
	scanf("%d", &n);
	m = n / 2;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &w[i][j]);
		}
	}


	bp(1, 0);

	printf("%d", ans);

	return 0;
}