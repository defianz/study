

#include <iostream>
using namespace std;


int main(){
	int a, b;
	cin >> a >> b;
	
	int gc, lc;

	if (a > b){
		for (int i = 1; i <= b; i++){
			if (b%i ==0 & a%i == 0){
				gc = i;
			}
		}
	}
	else {
		for (int i = 1; i <= a; i++){
			if (b%i == 0 & a%i == 0){
				gc = i;
			}
		}
	}

	lc = gc*(a / gc)*(b / gc);

	cout << gc << '\n';
	cout << lc << '\n';

	return 0;
}