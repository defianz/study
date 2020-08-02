
#include <stdio.h>
#include <algorithm>
using namespace std;
//
//시간 제한	메모리 제한	제출	정답	맞은 사람	정답 비율
//1 초	512 MB	4217	3639	3088	86.523%
//문제
//N개의 자연수와 자연수 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.N개의 자연수는 모두 다른 수이다.
//
//N개의 자연수 중에서 M개를 고른 수열
//같은 수를 여러 번 골라도 된다.
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
int arr[8] = { 0, };
int *tmp;
int ans[8] = { 0, };


void merge(int l, int m, int r){

	int i = l;
	int j = m + 1;
	int ind = l;

	while (i <= m && j <= r){
		if (arr[i] <= arr[j]){
			tmp[ind++] = arr[i++];
		}
		else{
			tmp[ind++] = arr[j++];
		}
	}

	int rem = i > m ? j : i;

	while (ind <= r){
		tmp[ind++] = arr[rem++];
	}

	for (int x = l; x <= r; x++){
		arr[x] = tmp[x];
	}
}

void mergeSort(int l, int r){
	if (l < r){
		int m = l + (r - l) / 2;

		mergeSort(l, m);
		mergeSort(m + 1, r);

		merge(l, m, r);
	}
}

void nm(int cnt, int start){
	if (cnt == m){
		for (int i = 0; i < cnt; i++){
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}
	for (int i = start; i < n; i++){
		ans[cnt] = arr[i];
		nm(cnt + 1, i);
	}
}


int main(){
	
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}

	tmp = new int[9];

	//sort(arr, arr + n);
	mergeSort(0,n-1);
	nm(0,0);

	return 0;
}