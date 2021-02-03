 

#include <iostream>

using namespace std;


int n, r, c;

int power(int a){
	return 1 << a;
}



int go(int a, int x, int y){
	if (a == 1){
		return 2 * x + y;
	}
	else {
		if (x < power(a-1)){
			if (y < power(a - 1)){
				return go(a - 1, x, y);
			}
			else {
				return go(a - 1, x, y - power(a - 1)) + power(2 * a - 2);
			}
		}
		else {
			if (y < power(a - 1)){
				return go(a - 1, x - power(a - 1), y) + power(2 * a - 2) * 2;
			}
			else {
				return go(a - 1, x-power(a-1), y - power(a - 1)) + power(2 * a - 2)*3;
			}
		}
	}
}

int main(){
	cin >> n >> r >> c;


	cout << go(n, r, c) << '\n';;


	return 0;
}