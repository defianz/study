

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void append(string &s, char c, int cnt){
	for (int i = 0; i < cnt; i++){
		s += c;
	}
}

int r, c;
int map[1001][1001];
int main(){

	cin >> r >> c;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			cin >> map[i][j];
		}
	}

	// r: Ȧ , c: Ȧ, ¦
	if (r % 2 != 0){
		bool flag1 = true;
		for (int i = 0; i < r; i++){

			for (int j = 0; j < c - 1; j++){
				if (flag1)	cout << "R";
				else cout << "L";
			}
			if (i != r - 1) {
				cout << "D";
				flag1 = !flag1;
			}
		}
	}
	// r: ¦ , c: Ȧ
	else if (c %2  !=0){
		bool flag2 = true;
		for (int i = 0; i < c; i++){
			for (int j = 0; j < r - 1; j++){
				if (flag2)	cout << "D";
				else cout << "U";
			}
			if (i != c - 1) {
				cout << "R";
				flag2 = !flag2;
			}
		}
	}
	// ¦, ¦
	else if (r % 2 == 0 && c % 2 == 0){
		int x, y;
		x = 0;
		y = 1;
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				if ((i + j) % 2 == 1){
					if (map[x][y] > map[i][j]){
						x = i;
						y = j;
					}
				}
			}
		}
		int x1 = 0;
		int y1 = 0;
		int x2 = r - 1;
		int y2 = c - 1;
		string s = "";
		string s2 = "";
		while (x2 - x1 > 1){
			if (x1 / 2 < x / 2){
				append(s, 'R', c - 1);
				append(s, 'D', 1);
				append(s, 'L', c - 1);
				append(s, 'D', 1);
				x1 += 2;
			}
			if (x / 2 < x2 / 2){
				append(s2, 'R', c - 1);
				append(s2, 'D', 1);
				append(s2, 'L', c - 1);
				append(s2, 'D', 1);
				x2 -= 2;
			}
		}

		while (y2 - y1 > 1){
			if (y1 / 2 < y / 2){
				append(s, 'D', 1);
				append(s, 'R', 1);
				append(s, 'U', 1);
				append(s, 'R', 1);
				y1 += 2;
			}
			if (y / 2 < y2 / 2){
				append(s2, 'D', 1);
				append(s2, 'R', 1);
				append(s2, 'U', 1);
				append(s2, 'R', 1);
				y2 -= 2;
			}
		}

		if (y == y1){
			append(s, 'R', 1);
			append(s, 'D', 1);
		}
		else {
			append(s, 'D', 1);
			append(s, 'R', 1);
		}
		reverse(s2.begin(), s2.end());
		s += s2;
		cout << s << '\n';
	}


	return 0;
}