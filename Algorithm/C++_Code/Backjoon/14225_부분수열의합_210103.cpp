
#include <iostream>
using namespace std;

int n;
int arr[21] = { 0, };
bool check[20 * 100001] = { false, };


void bf(int index, int hap){
	if (index == n){
		check[hap] = true;
		return;
	}
	bf(index + 1, hap);
	bf(index + 1, hap + arr[index]);
}

int main(){

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}


	bf(0, 0);


	for (int i = 1; i < 2000000; i++){
		if (!check[i]) {
			cout << i << '\n';
			break;
		}
	}

	return 0;
}