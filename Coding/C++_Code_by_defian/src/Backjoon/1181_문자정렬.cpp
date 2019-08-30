/*
 * 1181_단어정렬.CPP
 *
 *  Created on: 2019. 8. 17.
 *      Author: iautm
 */

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string a[200001];
int n;

bool compare2(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	} else {
		return a.length() < b.length();
	}
//	if(a.length() < b.length()){
//		return 1;
//	} else if (a.length() > b.length()){
//		return 0;
//	} else {
//		return a <b;
//	}
}

int main1181() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a, a + n, compare2);

	for (int i = 0; i < n; i++) {
		if (i > 0 && a[i] == a[i - 1]) {
			continue;
		}
		cout << a[i] << '\n';
	}
	return 0;
}

