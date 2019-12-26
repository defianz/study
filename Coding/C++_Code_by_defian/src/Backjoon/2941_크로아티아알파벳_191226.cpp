

#include <iostream>
#include <string>
using namespace std;

int main(){

	string st;
	cin >> st;
	int ans = 0;
	int index = 0;

	while (index <= st.length()){
		//cout << index << '\n';
		switch (st[index]){
		case 'c':
			if (st[index + 1] == '=' || st[index + 1] == '-'){
				index += 2;
				ans += 1;
			}
			else {
				index += 1;
				ans += 1;
			}
			break;
		case 'd':
			if (st[index + 1] == 'z' && st[index +2] == '='){
				index += 3;
				ans += 1;
			}
			else if (st[index + 1] == '-'){
				index += 2;
				ans += 1;
			}
			else {
				index += 1;
				ans += 1;
			}
			break;
		case 'l':
			if (st[index + 1] == 'j'){
				index += 2;
				ans += 1;
			}
			else {
				index += 1;
				ans += 1;
			}
			break;
		case 'n':
			if (st[index + 1] == 'j'){
				index += 2;
				ans += 1;
			}
			else {
				index += 1;
				ans += 1;
			}
			break;
		case 's':
			if (st[index + 1] == '='){
				index += 2;
				ans += 1;
			}
			else {
				index += 1;
				ans += 1;
			}
			break;
		case 'z':
			if (st[index + 1] == '='){
				index += 2;
				ans += 1;
			}
			else {
				index += 1;
				ans += 1;
			}
			break;

		default:
			index += 1;
			ans += 1;
			break;
		}
	}

	cout << ans-1 << '\n';

	return 0;
}