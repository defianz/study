

#include <iostream>
#include <string>
using namespace std;


int main(){
	string st;
	int ans = 0;
	cin >> st;
	
	// 입력 완료

	for (int i = 0; i < st.length(); i++){
		int tmp = st[i] - 'A' + 1;
		if (tmp <= 15){
			if (tmp % 3 != 0) ans += tmp / 3 + 1 + 2;
			else ans += tmp / 3 + 2;
		}
		else{
			if (tmp <= 19){
				ans += 8;
			}
			else if (tmp <= 22){
				ans += 9;
			}
			else {
				ans += 10;
			}
		}
	}

	cout << ans;
	return 0;
}