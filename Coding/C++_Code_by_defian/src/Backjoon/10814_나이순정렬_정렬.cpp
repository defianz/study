/*
 * 10814_나이순정렬_정렬.cpp
 *
 *  Created on: 2019. 7. 28.
 *      Author: iautm
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Person{
		int age;
		string name;
		int join;
	};

int main10814(){


	int n ;
	cin >> n;
	Person p[n];

	for (int i=0; i<n; i++){
		cin >> p[i].age >> p[i].name;
		p[i].join = i;
	}

	sort(p, p+n, [](Person u, Person v){
		return (u.age < v.age) || (u.age == v.age && u.join < v.join);
	});

	for(int i=0; i<n; i++){
		cout << p[i].age << ' ' << p[i].name << '\n';
	}

	return 0;
}


