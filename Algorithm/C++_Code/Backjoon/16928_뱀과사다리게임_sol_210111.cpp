
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int n, m;
int arr[101];
int dist[101];

int main(){
	cin >> n >> m;

	for (int i = 1; i <= 100; i++){
		arr[i] = i;
		dist[i] = -1;
	}
	
	for (int i = 0; i < n; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		arr[tmp1] = tmp2;
	}
	for (int i = 0; i < m; i++){
		int tmp1, tmp2;
		cin >> tmp1 >> tmp2;
		arr[tmp1] = tmp2;
	}


	dist[1] = 0;
	queue<int> q;
	q.push(1);

	while (!q.empty()){
		int index = q.front();
		q.pop();
		for (int i = 1; i <= 6; i++){
			int nx = index + i;
			if (nx > 100) continue;
			nx = arr[nx];
			if (dist[nx] == -1){
				dist[nx] = dist[index] + 1;
				q.push(nx);
			}
		}
	}

	cout << dist[100] << '\n';

	return 0;
}