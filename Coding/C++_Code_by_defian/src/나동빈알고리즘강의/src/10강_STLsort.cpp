/*
 * 10��_STLsort.cpp
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
	v.push_back(pair<int, string>(90,"�� �� ��"));
	v.push_back(pair<int, string>(85,"�� �� ��"));
	v.push_back(pair<int, string>(90,"�� �� ��"));
	v.push_back(pair<int, string>(79,"�� �� ��"));

	sort(v.begin(), v.end());

	for(int i=0; i<v.size();i++){
		cout << v[i].second << ' ';
	}

	return 0;
}
