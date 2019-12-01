/*
 * 11650_좌표정렬하기_정렬.cpp
 *
 *  Created on: 2019. 7. 28.
 *      Author: iautm
 */





#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main11650(){

	int n;
	scanf("%d",&n);
	vector<pair<int,int>> a(n);

	for ( int i=0 ;i<n; i++){
		scanf("%d %d",&a[i].first,&a[i].second);
	}
	sort(a.begin(),a.end());
	for (int i=0; i<n;i++){
		printf("%d %d\n",a[i].first,a[i].second);
	}

	return 0;
}
