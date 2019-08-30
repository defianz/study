/*
 * 10825_국영수_정렬.cpp
 *
 *  Created on: 2019. 7. 28.
 *      Author: iautm
 */


#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


struct score{
	string name;
	int gook;
	int english;
	int math;
	int join;
};


bool cmp (const score &u, const score &v){
	if( u.gook > v.gook ){
		return true;
	} else if (  u.gook == v.gook && u.english < v.english){
		return true;
	} else if ( u.gook == v.gook && u.english == v.english && u.math > v.math){
		return true;
	} else if (u.gook == v.gook && u.english == v.english && u.math == v.math && u.name < v.name){
		return true;
	}
	return false;
}

int main10825(){

	int n;
	cin >> n;
	vector<score> p(n);

	for (int i=0; i<n; i++){
		cin >> p[i].name >> p[i].gook >> p[i].english >> p[i].math;
		p[i].join = i;
	}

	sort(p.begin(),p.end(), cmp);

	for (int i=0; i<n; i++){
		cout << p[i].name << '\n';
	}

	return 0;
}

