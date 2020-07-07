/*
 * 1431_시리얼번호_문자열정렬.cpp
 *
 *  Created on: 2019. 8. 17.
 *      Author: iautm
 */


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n1431;
string a1431[1001];

bool compare1431(string a, string b){
	if( a.length() == b.length()){
		int suma = 0, sumb = 0;
		int an = a.length();
		int bn = b.length();
		for (int i = 0; i < an; i++) {
			if (isdigit(a[i])) {
				suma += (int)a[i] -'0';
			}
		}
		for (int i = 0; i < bn; i++) {
			if (isdigit(b[i])) {
				sumb += (int)b[i] - '0';
			}
		}
		if(suma != sumb){
			return suma < sumb;
		} else{
			return a<b;
		}
	} else {
		return a.length() < b.length();
	}
}


int main1431(){

	cin >> n1431;

	for(int i=0; i<n1431; i++){
		cin >> a1431[i];
	}

	sort (a1431, a1431+n1431, compare1431);

	for(int i=0; i<n1431; i++){
		cout << a1431[i] << '\n';
	}

	return 0;
}




