

#include <iostream>
#include <vector>
using namespace std;

int n, s;
int ans =0;
int a[21] = { 0, };

void go(int index, int hap){

	if (index == n){
		if (hap == s){
			ans++;
		}
		return;
	}
	go(index + 1, hap + a[index]);
	go(index + 1, hap);
}

int main(){
	
	cin >> n >> s;

	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	go(0, 0);
	if (s == 0) ans--;

	cout << ans << '\n';

	return 0;
}