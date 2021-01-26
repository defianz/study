

#include <iostream>
#include <algorithm>

using namespace std;


int main(){
	int n, m;
	cin >> n >> m;

	int ans = 0;

	
	if (n == 1) ans = 1;
	else if (n == 2 ){
		if (m <= 7){
			ans = (m + 1) / 2;
		}
		else{
			ans = 4;
		}
	}
	else if (n >= 3) {
		if (m >= 7) {
			ans = m - 2;
		}
		else {
			ans =  min(4, m);
		}
	}

	cout << ans << '\n';

	return 0;
}