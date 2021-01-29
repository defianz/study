

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s, t;
int ans = 0;

void bf(string input){
	if (input.size() == s.size()){
		if (input == s){
			ans = 1;
		}
		return;
	}

	if (input[0] == 'A' && input[input.size() - 1] == 'A'){
		bf(input.erase(input.size() - 1));
	}
	else if (input[0] == 'A' && input[input.size() - 1] == 'B'){
		return;
	}
	else if (input[0] == 'B' && input[input.size() - 1] == 'A'){
		string tmp = input;
		bf(tmp.erase(tmp.size() - 1));
		
		reverse(input.begin(), input.end());
		bf(input.erase(input.size() - 1));

	}
	else if (input[0] == 'B' && input[input.size() - 1] == 'B'){
		reverse(input.begin(), input.end());
		bf(input.erase(input.size() - 1));
	}
}


int main(){
	

	cin >> s >> t;

	bf(t);

	cout << ans << '\n';

	return 0;
}