#include <iostream>
using namespace std;

int main() {
	int x, y, ans;
	cin >> x >> y;

	if (x > 0){
		if (y > 0) ans = 1;
		else ans = 4;
	}
	else{
		if (y < 0) ans = 3;
		else ans = 2;
	}

	cout << ans << "\n";

	return 0;
}