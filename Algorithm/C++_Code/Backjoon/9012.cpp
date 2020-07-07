/*
 * 9012.cpp
 *
 *  Created on: 2019. 7. 2.
 *      Author: iautm
 */

#include <stdio.h>
#include <stack>
#include <string>
using namespace std;

int main9012(){
	int T;

	char str[51];
	scanf("%d",&T);



	for (int i = 0; i < T; i++) {
		scanf("%s", str);
		stack<char> s;
		for (int i = 0; i < 51; i++) {

			if (str[i] == '(') {
				s.push('(');
			} else if (str[i] == ')') {
				if (s.empty()) {
					printf("NO\n");
					break;
				} else {
					s.pop();
				}
			} else {
				if (s.empty()) {
					printf("YES\n");
					break;
				} else {
					printf("NO\n");
					break;
				}
			}
		}

	}

	return 0;
}


