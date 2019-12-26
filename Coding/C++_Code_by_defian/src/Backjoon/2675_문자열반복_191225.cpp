

#include <iostream>
#include <string>
using namespace std;

int main(){

	int testcase;
	cin >> testcase;

	while (testcase--){
		int r;
		string str;
		cin >> r >> str;
		// 입력 완료

		for (int i = 0; i < str.length(); i++){
			for (int j = 1; j <= r; j++){
				cout << str[i];
			}
		}
		cout << '\n';

	}

	return 0;
}