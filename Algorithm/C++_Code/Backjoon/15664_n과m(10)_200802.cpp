

#include <iostream>
#include <set>
#include <vector>
using namespace std;

//문제
//N개의 자연수와 자연수 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//
//N개의 자연수 중에서 M개를 고른 수열
//고른 수열은 비내림차순이어야 한다.
//길이가 K인 수열 A가 A1 ≤ A2 ≤ ... ≤ AK - 1 ≤ AK를 만족하면, 비내림차순이라고 한다.
//입력
//첫째 줄에 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)
//
//둘째 줄에 N개의 수가 주어진다.입력으로 주어지는 수는 10, 000보다 작거나 같은 자연수이다.
//
//출력
//한 줄에 하나씩 문제의 조건을 만족하는 수열을 출력한다.중복되는 수열을 여러 번 출력하면 안되며, 각 수열은 공백으로 구분해서 출력해야 한다.
//
//수열은 사전 순으로 증가하는 순서로 출력해야 한다.

int n, m;
int arr[9];
vector<int> tmp;
set<vector<int> > ans;


void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int partition(int l, int r){
	int i = l - 1;
	int p = r;
	for (int j = l; j <= r - 1; j++){
		if (arr[j] < arr[p]){
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return i + 1;
}

void quickSort(int l, int r){
	if (l < r){
		int p = partition(l, r);

		quickSort(l, p - 1);
		quickSort(p + 1, r);
	}
}

void nm(int cnt, int start){
	if (cnt == m){
		ans.insert(tmp);
		return;
	}
	for (int i = start; i < n; i++){
		tmp.push_back(arr[i]);
		nm(cnt + 1, i + 1);
		tmp.pop_back();
	}
}

int main(){

	cin >> n >> m;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}

	quickSort(0, n-1);

	nm(0,0);

	for (auto &t : ans){
		for (int i = 0; i < t.size(); i++){
			cout << t[i] << ' ';
		}
		cout << '\n';
	}

	return 0;
}