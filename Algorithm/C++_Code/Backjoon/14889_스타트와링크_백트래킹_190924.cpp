

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n,teamn;
int map[21][21];
int sol = 10001;
vector<int> v;
vector<int> check;
bool visited[21] = { false, };


int calscore(vector<int> xx){
	int score = 0;
	for (int i = 0; i < xx.size(); i++){
		for (int j = i + 1; j < xx.size(); j++){
			score += map[xx[i]][xx[j]] + map[xx[j]][xx[i]];
		}
	}
	return score;
}

void dp(int start,int count){
	if (count == teamn){
		vector<int> teama;
		vector<int> teamb;

		for (int i = 1; i <= n; i++){
			if (visited[i] == false){
				teama.push_back(i);
			}
			else {
				teamb.push_back(i);
			}
		}
		int diff = calscore(teama) - calscore(teamb);
		if (diff < 0) diff *= -1;
		if (sol > diff) sol = diff;
		return;
	}
	for (int i = start; i <= n; i++){
		if (visited[i] == false){
			visited[i] = true;
			dp(i+1,count + 1);
			visited[i] = false;
		}
	}
}


int main(){
	scanf("%d", &n);
	teamn = n / 2;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			scanf("%d", &map[i][j]);
		}
	}

	for (int i = 1; i <= n; i++){
		v.push_back(i);
	}
	dp(1, 0);

	printf("%d", sol);

	return 0;
}