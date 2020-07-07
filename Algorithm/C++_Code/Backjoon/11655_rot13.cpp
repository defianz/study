/*
 * 11655_rot13.cpp
 *
 *  Created on: 2019. 8. 17.
 *      Author: iautm
 */

#include <iostream>
#include <string>
using namespace std;

int main11655(){

	string input;

	getline(cin,input);

	for (int i=0; i<input.length(); i++){
		if(input[i]<'A'){
			cout << (char)input[i];
		} else {
			if (input[i] >= 'A' && input[i] <='Z'){
				int temp = input[i] + 13;
				if(temp > 'Z'){
					temp -= 26;
				}
				cout << (char) temp;
			} else if (input[i] >= 'a' && input[i] <= 'z'){
				int temp = input[i] +13;
				if (temp > 'z') {
					temp -= 26;
				}
				cout << (char) temp;
			}

		}

	}

	return 0;
}


