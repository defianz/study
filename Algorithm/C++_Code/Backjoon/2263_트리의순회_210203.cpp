

#include <iostream>
using namespace std;

int n;
int in_order[10001];
int post_order[10001];

int position[10001];


void solve(int in_start, int in_end, int post_start, int post_end){

	if (in_start > in_end || post_start > post_end) return;
	int root = post_order[post_end];
	cout << root << ' ';
	int p = position[root];

	int left = p - in_start;
	solve(in_start, p - 1, post_start, post_start + left - 1);
	solve(p + 1, in_end, post_start + left, post_end - 1);
}


int main(){
	cin >> n;
	for (int i = 0; i < n; i++) cin >> in_order[i];
	for (int i = 0; i < n; i++) cin >> post_order[i];
	for (int i = 0; i < n; i++){
		position[in_order[i]] = i;
	}

	solve(0, n - 1, 0, n - 1);

	return 0;
}