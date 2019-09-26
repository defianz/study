


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> q;

int max2 = 0;

void getmax(vector<int> aa){
	int sum = 0;
	for (int i = 0; i < n - 1; i++){
		int tmp2 = aa[i] - aa[i + 1];
		if (tmp2 < 0) tmp2 *= -1;
		sum += tmp2;
	}
	if (sum > max2) max2 = sum;
	return;
}


int main(){
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		q.push_back(tmp);
	}
	sort(q.begin(), q.end());

	while (next_permutation(q.begin(), q.end())){
		getmax(q);
	}
	printf("%d", max2);

	return 0;
}