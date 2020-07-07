


#include <stdio.h>
#include <vector>
using namespace std;

vector<int> v;

int n, b, c;
long long ans = 0; 

int main(){
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		int tmp;
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	scanf("%d %d", &b, &c);

	for (int i = 0; i < v.size(); i++){
		long long tmp1 = 1;
		if (v[i] - b <= 0){
			ans += 1;
		}
		else {
			if ((v[i] - b) % c != 0){
				tmp1 = (v[i] - b) / c + 1;
			}
			else {
				tmp1 = (v[i] - b) / c;
			}
			ans += tmp1 +1;
		}
	}

	printf("%lld", ans);

	return 0;
}