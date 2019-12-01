/*
 * 10799.cpp
 *
 *  Created on: 2019. 7. 3.
 *      Author: iautm
 */

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main10799(){
	stack<int> st;
	string s;
	cin >> s;
	int cnt=0;

	for(int i=0; i<s.size(); i++){
		if(s[i] =='('){
			st.push(i);
		} else if (st.top()+1 != i){
			st.pop();
			cnt += 1;
		} else{
			st.pop();
			cnt += st.size();
		}
	}

	cout << cnt << endl;

	return 0;
}



