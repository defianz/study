#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int sol = 0;

char alpha[256];

int calc(vector<string> &a, vector<char> &letters, vector<int> &b){
	int sum = 0;
	for (int i = 0; i < letters.size(); i++){
		alpha[letters[i]] = b[i];
	}

	for (string t : a){
		int temp = 0;
		for (char x : t){
			temp = temp * 10 + alpha[x];
		}
		sum += temp;
	}

	return sum;
}




int main(){
	int n = 0;

	cin >> n;
	vector<string> a(n);
	vector<char> letters;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		for (char c : a[i]){
			letters.push_back(c);
		}
	}
	sort(letters.begin(), letters.end());
	letters.erase(unique(letters.begin(), letters.end()), letters.end());

	vector<int> b;
	for (int i = 9; i > 9 - letters.size(); i--){
		b.push_back(i);
	}

	sort(b.begin(), b.end());
	int ans = 0;
	do{
		int now = calc(a, letters, b);
		if (ans < now) ans = now;
	} while (next_permutation(b.begin(), b.end()));

	cout << ans << '\n';

	return 0;
}