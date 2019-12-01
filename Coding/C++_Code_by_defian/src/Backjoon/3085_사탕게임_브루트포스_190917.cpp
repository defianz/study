
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int n;

int check(vector<string> &a){
	int n = a.size();
	int ans = 1;
	for (int i = 0; i < n; i++){
		int cnt = 1;
		for (int j = 1; j < n; j++){
			if (a[i][j] == a[i][j - 1]){
				cnt += 1;
			}
			else {
				cnt = 1;
			}
			if (ans < cnt) ans = cnt;
		}
		cnt = 1;
		for (int j = 1; j < n; j++){
			if (a[j][i] == a[j - 1][i]){
				cnt += 1;
			}
			else{
				cnt = 1;
			}
			if (ans < cnt) ans = cnt;
		}
	}

	return ans;

}


int main(){

	cin >> n;
	vector<string> a(n);
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	int ans = 0;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j + 1 < n){
				swap(a[i][j], a[i][j + 1]);
				int temp = check(a);
				if (ans < temp) ans = temp;
				swap(a[i][j], a[i][j + 1]);
			}
			if (j + 1 < n){
				swap(a[j][i], a[j + 1][i]);
				int temp = check(a);
				if (ans < temp) ans = temp;
				swap(a[j][i], a[j + 1][i]);
			}
		}
	}

	printf("%d", ans);
	return 0;
}