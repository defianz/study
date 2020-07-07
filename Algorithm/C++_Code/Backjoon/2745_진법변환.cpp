/*
 * 2745_진법변환.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */


#include <stdio.h>
#include <iostream>
using namespace std;

int main2745(){

	string n;
	int b;
	cin >> n >> b;
	int ans =0;
	for (int i=0; i<n.size(); i++){
		if('0'<= n[i] && n[i] <='9'){
			ans = ans * b + (n[i]-'0');
		} else {
			ans = ans * b + (n[i] - 'A' + 10);
		}
	}

	cout << ans << endl;

	return 0;
}

