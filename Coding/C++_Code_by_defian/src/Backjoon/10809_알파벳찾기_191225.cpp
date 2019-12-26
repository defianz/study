

#include <iostream>
#include <string>
#include <cstring>
using namespace std;


int main(){
	string st;
	cin >> st;
	int a[26];
	memset(a, -1, sizeof(a));
	
	for (int i = 0; i < st.length(); i++){
		
		if (a[st[i] - 'a'] == -1) a[st[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++){
		cout << a[i] << ' ';
	}

	return 0;
}