/*
 * 10강_STLsort.cpp
 *
 *  Created on: 2019. 8. 16.
 *      Author: iautm
 */




#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int mainaaaa(){

	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90,"박 한 울"));
	v.push_back(pair<int, string>(85,"이 태 일"));
	v.push_back(pair<int, string>(90,"나 동 빈"));
	v.push_back(pair<int, string>(79,"이 상 욱"));

	sort(v.begin(), v.end());

	for(int i=0; i<v.size();i++){
		cout << v[i].second << ' ';
	}

	return 0;
}
