

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool check(string password){
	int mo=0, za = 0;
	for (auto a : password){
		if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
			mo++;
		}
		else {
			za++;
		}
	}
	return mo >= 1 && za >= 2;
}

void go(int count, vector<char> alpha, string password, int index){
	if (password.length() == count){
		if (check(password)){
			cout << password << '\n';
			
		}
		return;
	}
	if (index == alpha.size()) return;
	go(count, alpha, password + alpha[index], index + 1);
	go(count, alpha, password , index + 1);

}


int main(){
	int n, m;
	cin >> n >> m;
	vector<char> v;

	for (int i = 0; i < m; i++){
		char tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());

	go(n, v, "", 0);

	return 0;
}