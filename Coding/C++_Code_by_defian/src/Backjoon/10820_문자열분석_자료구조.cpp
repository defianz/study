/*
 * 10820_문자열분석_자료구조.cpp
 *
 *  Created on: 2019. 8. 17.
 *      Author: iautm
 */
#include <iostream>
#include <string>
using namespace std;

int main1820(){
	string input;
	while (std::getline(cin,input)){
		int ans[4] = {0,};
		for(int i=0; i<input.size(); i++){
			if(input[i] == ' '){
				ans[3]++;
			} else{
				int temp = input[i] - '0';
				if( temp >= 49){
					ans[0]++;
				} else if ( temp >= 17){
					ans[1]++;
				} else {
					ans[2]++;
				}
			}
		}

		for(int i=0; i<4; i++){
			if(i == 3){
				cout << ans[i] << endl;
			} else{
				cout << ans[i] << " ";
			}
		}
	}
	return 0;
}




