

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){

	string s, t;

	cin >> s >> t;

	int ans = 0;
	while (t.size() != s.size()){
		if (t[t.size() - 1] == 'A'){
			t.pop_back();
		}
		else {
			t.pop_back();
			reverse(t.begin(),t.end());
		}

		if (t == s){
			ans = 1;
			break;
		}
	}

	cout << ans << '\n';
	return 0;
}