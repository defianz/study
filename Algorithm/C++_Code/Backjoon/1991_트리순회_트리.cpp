/*
 * 1991_트리순회_트리.cpp
 *
 *  Created on: 2019. 8. 1.
 *      Author: iautm
 */

#include <iostream>
using namespace std;


int a1991[27][2];



void preorder1991(int x){
	if ( x== -1 ) return;
	cout << (char) (x+'A');
	preorder1991(a1991[x][0]);
	preorder1991(a1991[x][1]);
}

void inorder1991(int x){
	if ( x== -1 ) return;
	inorder1991(a1991[x][0]);
	cout << (char) (x+'A');
	inorder1991(a1991[x][1]);
}

void postorder1991(int x){
	if ( x== -1 ) return;
	postorder1991(a1991[x][0]);
	postorder1991(a1991[x][1]);
	cout << (char) (x+'A');
}

int main1991(){

	int n;
	cin >> n;
	for(int i=1; i<=n; i++){

		char x,y,z;
		cin >> x >> y >> z;

		x = x - 'A';
		if(y != '.'){
			a1991[x][0] = y- 'A';
		} else {
			a1991[x][0] = -1;
		}

		if (z!= '.'){
			a1991[x][1] = z - 'A';
		} else {
			a1991[x][1] = -1;
		}
	}

	preorder1991(0);
	cout << "\n";
	inorder1991(0);
	cout << "\n";
	postorder1991(0);

	return 0;
}


