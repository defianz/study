
#include <iostream>
using namespace std;
int n, m, tmp;
int ans = 0;
int arr[100] = { 0, };
bool check[100] = { false, };

void bf(int cnt, int hap, int selected){
	if (cnt == 3){

	}
}

int main() {

	for (int i = 0; i < 100; i++){
		cout << check[i] << "\n";
	}
	//for (int i = 0; i < 100; i++){
	//	cout << arr[i] << "\n";
	//}

	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> tmp;
		arr[i] = tmp;
	}

	//bf(0, 0, );
	
	cout << ans;

	return 0;
}
