/*
 * 9��_STLsort.cpp
 *
 *  Created on: 2019. 8. 16.
 *      Author: iautm
 */

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool compare (int a, int b ){
	return a>b;
}

class Student {
public:
	string name;
	int score;
	Student(string name, int score){
		this -> name = name;
		this -> score = score;
	}

	bool operator < (Student &student){
		return this -> score < student.score;
	}
};


int main9(){

	Student students[] = {
			Student("�� �� ö ",90),
			Student("�� �� �� ",89),
			Student("�� �� �� ",88),
	};
	sort(students,students+3);

	for (int i=0; i<3; i++){
		cout << students[i].name << " ";
	}

	return 0;
}


