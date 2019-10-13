


#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int n;
vector<int> v[11];
bool visited[11] = { false, };
int map[11] = { 0, };

bool check[11] = { false, };
queue<int> q;
bool flag = true;

int ans = 10001;



bool find_connected(vector<int> ve,int type){
	/*printf("들어는오나?\n");
	for (auto a : ve){
		printf("%d ", a);
	}*/
	//printf("확인끝\n");
	flag = true;
	fill(check, check + 11, false);
	//printf("여기?\n");
	q.push(ve.at(0));
	//printf("여기2?\n");
	check[ve.at(0)] = true;
	//printf("벡터 at 써서 0함수 : %d \n", ve.at(0));
	while (!q.empty()){

		int cx = q.front();
		q.pop();

		for (int i = 0; i < v[cx].size(); i++){
			int nx = v[cx][i];
			if (visited[nx] == true && check[nx] == false && type ==1){
				q.push(nx);
				check[nx] = true;
			}
			if (visited[nx] == false && check[nx] == false && type ==2){
				q.push(nx);
				check[nx] = true;
			}
		}
	}
	for (auto const a : ve){
		if (check[a] == false){
			flag = false;
		}
	}
	
	return flag;
}


int calsum(vector<int> ve){
	int sum = 0;
	for (auto const a : ve){
		sum += map[a];
	}
	return sum;
}

void go(int start, int teamm, int cntmax){
	if (teamm == cntmax){
		vector<int> first;
		vector<int> second;
	/*	printf("숫자는 %d\n", teamm);
		for (auto a : visited){
			printf("%d ", a);
		}
		printf("\n");*/
		for (int i = 1; i <= n; i++){
			if (visited[i] == true){
				first.push_back(i);
			}
			else{
				second.push_back(i);
			}
		}
		
		if (find_connected(first,1) && find_connected(second,2)){
			int diff = abs(calsum(first) - calsum(second));
			if (ans > diff) ans = diff;
		}

		return;
	}

	for (int i = start ; i <= n; i++){
		if (visited[i] == false){
			visited[i] = true;
			go(i+1, teamm + 1, cntmax);
			visited[i] = false;
		}
	}

}


int main(){
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &map[i]);
	}

	for (int i = 1; i <= n; i++){
		int m;
		scanf("%d", &m);
		for (int j = 0; j < m; j++){
			int tmp;
			scanf("%d", &tmp);
			v[i].push_back(tmp);
		}
	}

	for (int i = 1; i <= n; i++){
		sort(v[i].begin(), v[i].end());
	}

	// 입력 완료


	// 코드 실행
	for (int i = 1; i <= n / 2; i++){
		fill(visited, visited + 11, false);
		go(1,0,i);
	}

	

	// 코드 완료

	//  결과 출력 (ans)

	if (ans != 10001) printf("%d", ans);
	else{
		printf("%d", -1);
	}


	return 0;
}