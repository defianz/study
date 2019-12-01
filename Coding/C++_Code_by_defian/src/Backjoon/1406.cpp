/*
 * 1406.cpp
 *
 *  Created on: 2019. 7. 3.
 *      Author: iautm
 */

#include <stdio.h>
#include <stack>
#include <cstring>
using namespace std;

int main1406(){


	char firstline[100000];
	scanf("%s",firstline);
	int n = strlen(firstline);
	stack<char> left,right;

	for (int i=0; i<n; i++){
		left.push(firstline[i]);
	}

	int m;
	scanf("%d",&m);

	while (m--) {
	        char what;
	        scanf(" %c",&what);
	        if (what == 'L') {
	            if (!left.empty()) {
	                right.push(left.top());
	                left.pop();
	            }
	        } else if (what == 'D') {
	            if (!right.empty()) {
	                left.push(right.top());
	                right.pop();
	            }
	        } else if (what == 'B') {
	            if (!left.empty()) {
	                left.pop();
	            }
	        } else if (what == 'P') {
	            char c;
	            scanf(" %c",&c);
	            left.push(c);
	        }
	    }
	    while (!left.empty()) {
	        right.push(left.top());
	        left.pop();
	    }
	    while (!right.empty()) {
	        printf("%c",right.top());
	        right.pop();
	    }
	    printf("\n");


	return 0;
}


