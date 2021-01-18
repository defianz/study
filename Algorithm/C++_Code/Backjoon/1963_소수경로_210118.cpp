

#include <iostream>
#include <cstring>
#include <queue>
#include <cmath>

using namespace std;
int arr[10001];

int number = 10000; // 구하고자 하는 소수의 범위
int primeNum[10000];

void primeNumberSieve()
{
	// primeNum 배열 초기화
	for (int i = 2; i <= number; i++)
	{
		primeNum[i] = i;
	}

	for (int i = 2; i <= sqrt(number); i++)
	{
		// primeNum[i] 가 0이면 이미 소수가 아니므로 continue
		if (primeNum[i] == 0)
			continue;
		// i*k (k<i) 까지의 수는 이미 검사했으므로 j는 i*i 부터 검사해준다.
		for (int j = i * i; j <= number; j += i)
			primeNum[j] = 0;
	}


}


int sol(int a, int b){
	memset(arr, -1, sizeof(arr));
	queue<int> q;
	q.push(a);
	arr[a] = 0;

	while (!q.empty()){
		int x = q.front();
		q.pop();
		int a = x / 1000;
		int b = x % 1000 / 100;
		int c = x % 100 / 10;
		int d = x % 10;
		if (arr[b] != -1) break;
		for (int i = 0; i < 4; i++){
			if (i == 0){
				for (int j = 1; j < 10; j++){
					int na = a + j;
					if (na == 10) continue;
					na %= 10;
					int tmp = na * 1000 + b * 100 + c * 10 + d;
					if (primeNum[tmp] != 0 && arr[tmp] == -1) {
						arr[tmp] = arr[x] + 1;
						q.push(tmp);
					}
				}
			}
			else if (i == 1){
				for (int j = 1; j < 10; j++){
					int nb = b + j;
					nb %= 10;
					int tmp = a * 1000 + nb * 100 + c * 10 + d;
					if (primeNum[tmp] != 0 && arr[tmp] == -1) {
						arr[tmp] = arr[x] + 1;
						q.push(tmp);
					}
				}
			}
			else if (i == 2){
				for (int j = 1; j < 10; j++){
					int nc = c + j;
					nc %= 10;
					int tmp = a * 1000 + b * 100 + nc * 10 + d;
					if (primeNum[tmp] != 0 && arr[tmp] == -1) {
						arr[tmp] = arr[x] + 1;
						q.push(tmp);
					}
				}
			}
			else if (i == 3){
				for (int j = 1; j < 10; j++){
					int nd = d + j;
					nd %= 10;
					int tmp = a * 1000 + b * 100 + c * 10 + nd;
					if (primeNum[tmp] != 0 && arr[tmp] == -1) {
						arr[tmp] = arr[x] + 1;
						q.push(tmp);
					}
				}
			}
		}
	}


	return arr[b];
}

int main(){
	int testcase;
	cin >> testcase;
	int a, b;
	primeNumberSieve();


	while (testcase--){
		cin >> a >> b;

		int ans = sol(a, b);
		if (ans == -1) cout << "Impossible" << '\n';
		else cout << ans << '\n';
	}

	return 0;
}