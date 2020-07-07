


#include <iostream>
#include <string>
using namespace std;

int main(){
	int testcase;
	int ans = 0;
	string st;
	cin >> testcase;

	while (testcase--){
		cin >> st;
		bool check[26] = { false, };
		bool tcheck = true;

		for (int i = 0; i < st.length(); i++){
			if (check[st[i] - 'a'] == false){
				check[st[i] - 'a'] = true;
			}
			else {
				if (st[i - 1] == st[i]){
					continue;
				}
				else{
					tcheck = false;
					break;
				}
			}
		}

		if (tcheck == true){
			//cout << st <<'\n';
			ans += 1;
		}
	}


	cout << ans << '\n';

	return 0;
}