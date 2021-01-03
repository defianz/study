
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n;
int arr[21][21];
vector<int> a;

int main(){

	int ans = 2100000000;

	cin >> n;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++){
		a.push_back(0);
	}

	for (int i = 0; i < n / 2; i++){
		a[i] = 1;
	}
	
	sort(a.begin(), a.end());

	do{
		vector<int> one;
		vector<int> two;

		for (int i = 0; i < n; i++){
			if (a[i] == 1) one.push_back(i);
			else two.push_back(i);
		}

		int tmpa = 0;
		int tmpb = 0;
		for (int i = 0; i < n/2; i++){
			for (int j = 0; j < n / 2; j++){
				if (i == j) continue;
				tmpa += arr[one[i]][one[j]];
				tmpb += arr[two[i]][two[j]];
			}
		}
		int diff = tmpa - tmpb;
		if (diff < 0) diff *= -1;
		if (ans > diff) ans = diff;

	} while (next_permutation(a.begin(), a.end()));


	cout << ans << '\n';
	return 0;
}