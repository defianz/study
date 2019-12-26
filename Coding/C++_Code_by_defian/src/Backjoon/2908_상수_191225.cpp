

#include <iostream>
#include <string>
using namespace std;


string foo(string st){
	string res;
	res.push_back(st[2]);
	res.push_back(st[1]);
	res.push_back(st[0]);

	return res;
}

int main(){

	string a,b;
	cin >> a >> b;

	int a1 = stoi(foo(a));
	int b1 = stoi(foo(b));

	if (a1 > b1) cout << a1;
	else cout << b1;
		

	return 0;
}