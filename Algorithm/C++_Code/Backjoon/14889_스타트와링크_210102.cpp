
#include <iostream>
using namespace std;
int n;
int arr[21][21];
int ans=21*100;


int calc(bool check[]){
	int tmp = 0;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (check[i] && check[j]) tmp += arr[i][j];
		}
	}
	return tmp;
}

void dp(int start, int cnt, bool check[]){
	if (cnt == n / 2){
		bool checkb[21] = { false, };
		for (int i = 1; i <= n; i++){
			if (check[i] == false) checkb[i] = true;
		}
		int tmpA = calc(check);
		int tmpB = calc(checkb);
		int temp = tmpA - tmpB;
		if (temp < 0) temp *= -1;
		if (ans > temp) ans = temp;
		return;
	}
	for (int i = start; i <= n; i++){
		if (check[i] == false){
			check[i] = true;
			dp(i + 1, cnt + 1, check);
			check[i] = false;
		}
	}
}

int main(){
	cin >> n;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			cin >> arr[i][j];
		}
	}
	bool check[21] = { false, };

	dp(1, 0,check);


	cout << ans << '\n';
	return 0;
}