/*
 * 9°­_STLsort.cpp
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
			Student("±è Çü Ã¶ ",90),
			Student("±è Çü ¼ø ",89),
			Student("±è Çü Áö ",88),
	};
	sort(students,students+3);

	for (int i=0; i<3; i++){
		cout << students[i].name << " ";
	}

	return 0;
}


