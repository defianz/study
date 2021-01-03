#include <iostream>
using namespace std;
int n;
int min_sol = 1000000001;
int max_sol = -1000000001;
int arr[12];
int yun[4];

int calc(int hap, int i, int index){
	if (i == 0) return hap += arr[index];
	else if (i == 1) return hap -= arr[index];
	else if (i == 2) return  hap *= arr[index];
	else return hap /= arr[index];
}

void func(int hap, int cindex){
	if (cindex == n - 1){
		if (hap < min_sol) min_sol = hap;
		if (hap > max_sol) max_sol = hap;
		return;
	}

	for (int i = 0; i < 4; i++){
		if (yun[i] != 0){
			yun[i] -= 1;
			func(calc(hap, i, cindex + 1), cindex + 1 );
			yun[i] += 1;
		}
	}
}


int main(){




	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++){
		cin >> yun[i];
	}


	func(arr[0], 0);


	cout << max_sol << '\n';
	cout << min_sol << '\n';

	return 0;
}