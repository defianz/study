#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long long T = 0, C = 0, sr = 0, br = 0;
	double A = 0;
	long long x1 = 0, x2 = 0, y1 = 0, y2 = 0, r1 = 0, r2 = 0;
	cin >> T;

	while (T != 0){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		A = sqrt(abs(x1 - x2)*abs(x1 - x2) + abs(y1 - y2)*abs(y1 - y2));
		C = r1 + r2;
		sr = r1>r2 ? r2 : r1;
		br = r1<r2 ? r2 : r1;
		if (A>C)cout << 0 << '\n';
		else if (A == C)cout << 1 << '\n';
		else if (C>A){
			if (r1 == r2&&x1 == x2&&y1 == y2)cout << -1 << '\n';
			else if (A + sr>br)cout << 2 << '\n';
			else if (A + sr == br)cout << 1 << '\n';
			else if (A + sr<br)cout << 0 << '\n';
		}
		T--;
	}
	return 0;
}
