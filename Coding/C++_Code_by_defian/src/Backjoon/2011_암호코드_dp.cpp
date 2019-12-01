/*
 * 2011_암호코드_dp.cpp
 *
 *  Created on: 2019. 8. 18.
 *      Author: iautm
 */


#include <iostream>
#include <string>
using namespace std;

int cnt2011=0;
//
//void dp2011(string n){
//	if( n%10 ==0 && n %100 ==0){
//		cnt2011 +=1;
//	} else{
//		if ( n%10 ==0 && n%100 !=0){
//			if(n%100 > 26) return;
//			dp2011(n/100);
//		} else if( n%100 <=26 && n%100 >10){
//			dp2011(n/100);
//		}
//		if ( n%10 != 0){
//			dp2011(n/10);
//		}
//	}
//}

int mainttt(){

	string input;
	cin >> input;

//	dp2011(input);

	printf("%d",cnt2011%1000000);

	return 0;
}

