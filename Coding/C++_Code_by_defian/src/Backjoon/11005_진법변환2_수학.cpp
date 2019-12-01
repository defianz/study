/*
 * 11005_진법변환2_수학.cpp
 *
 *  Created on: 2019. 7. 24.
 *      Author: iautm
 */

#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main11005(){

	int n,b;
	scanf("%d",&n);
	scanf("%d",&b);

	string ans = "";
	while (n>0){
		int r = n % b;
		if (r<10){
			ans += (char) (r+'0');
		} else{
			ans += (char) (r-10+'A');
		}
		n /= b;
	}

	reverse(ans.begin(),ans.end());
	std::cout << ans << endl;


	return 0;
}


