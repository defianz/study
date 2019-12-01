/*
 * 1377_버블소트_정렬.cpp
 *
 *  Created on: 2019. 7. 29.
 *      Author: iautm
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main1377() {
	int n;
	scanf("%d", &n);
	vector<pair<int,int>> a(n+1);
	for(int i=1; i<=n; i++){
		scanf("%d",&a[i].first);
		a[i].second = i;
	}

	sort(a.begin(),a.end());

	int tmp =0;
	for(int i=1; i<=n; i++){
		if(i<a[i].second && tmp < a[i].second-i) tmp = a[i].second-i;
	}

	printf("%d",tmp+1);


	return 0;
}

