
#include <iostream>
using namespace std;

int main(){
	int tmp, sum = 0;

	for (int i = 0; i < 5; i++){
		cin >> tmp;
		if (tmp < 40) tmp = 40;
		sum += tmp;
	}
	
	cout << sum / 5;

	return 0;
}