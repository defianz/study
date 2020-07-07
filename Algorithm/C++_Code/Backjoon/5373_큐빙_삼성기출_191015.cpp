


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int testcase;
int n;
vector<pair<char, char>> v;

char u[4][4];
char d[4][4];
char f[4][4];
char b[4][4];
char l[4][4];
char r[4][4];


void rollbing(char sx, char dir){
	if (sx == 'U'){
		if (dir == '+'){
			char tmp1, tmp2, tmp3;
			tmp1 = f[1][1];
			tmp2 = f[1][2];
			tmp3 = f[1][3];
			f[1][1] = r[1][1];
			f[1][2] = r[1][2];
			f[1][3] = r[1][3];
			r[1][1] = b[1][1];
			r[1][2] = b[1][2];
			r[1][3] = b[1][3];
			b[1][1] = l[1][1];
			b[1][2] = l[1][2];
			b[1][3] = l[1][3];
			l[1][1] = tmp1;
			l[1][2] = tmp2;
			l[1][3] = tmp3;
		}
		else {
			char tmp1, tmp2, tmp3;
			tmp1 = f[1][1];
			tmp2 = f[1][2];
			tmp3 = f[1][3];
			f[1][1] = l[1][1];
			f[1][2] = l[1][2];
			f[1][3] = l[1][3];
			l[1][1] = b[1][2];
			l[1][2] = b[1][2];
			l[1][3] = b[1][3];
			b[1][1] = r[1][1];
			b[1][2] = r[1][2];
			b[1][3] = r[1][3];
			r[1][1] = tmp1;
			r[1][2] = tmp2;
			r[1][3] = tmp3;
		}
	}
	else if (sx = 'D'){
		if (dir == '+'){
			char tmp1, tmp2, tmp3;
			tmp1 = f[3][1];
			tmp2 = f[3][2];
			tmp3 = f[3][3];
			f[3][1] = r[3][1];
			f[3][2] = r[3][2];
			f[3][3] = r[3][3];
			r[3][1] = b[3][1];
			r[3][2] = b[3][2];
			r[3][3] = b[3][3];
			b[3][1] = l[3][1];
			b[3][2] = l[3][2];
			b[3][3] = l[3][3];
			l[3][1] = tmp1;
			l[3][2] = tmp2;
			l[3][3] = tmp3;
		}
		else {
			char tmp1, tmp2, tmp3;
			tmp1 = f[3][1];
			tmp2 = f[3][2];
			tmp3 = f[3][3];
			f[3][1] = l[3][1];
			f[3][2] = l[3][2];
			f[3][3] = l[3][3];
			l[3][1] = b[3][2];
			l[3][2] = b[3][2];
			l[3][3] = b[3][3];
			b[3][1] = r[3][1];
			b[3][2] = r[3][2];
			b[3][3] = r[3][3];
			r[3][1] = tmp1;
			r[3][2] = tmp2;
			r[3][3] = tmp3;
		}
	}
	else if (sx = 'F'){
		if (dir == '+'){
			char tmp1, tmp2, tmp3;
			tmp1 = u[3][1];
			tmp2 = u[3][2];
			tmp3 = u[3][3];
			u[3][1] = l[3][3];
			u[3][2] = l[2][3];
			u[3][3] = l[1][3];
			l[1][3] = d[3][1];
			l[2][3] = d[3][2];
			l[3][3] = d[3][3];
			d[3][1] = r[3][1];
			d[3][2] = r[2][1];
			d[3][3] = r[1][1];
			r[1][1] = tmp1;
			r[2][1] = tmp2;
			r[3][1] = tmp3;
		}
		else {
			char tmp1, tmp2, tmp3;
			tmp1 = u[3][1];
			tmp2 = u[3][2];
			tmp3 = u[3][3];
			u[3][1] = r[1][1];
			u[3][2] = r[2][1];
			u[3][3] = r[3][1];
			r[1][1] = d[3][3];
			r[2][1] = d[3][2];
			r[3][1] = d[3][1];
			d[3][1] = l[1][3];
			d[3][2] = l[2][3];
			d[3][3] = l[3][3];
			l[1][3] = tmp1;
			l[2][3] = tmp2;
			l[3][3] = tmp3;
		}
	}



}


int main(){
	cin >> testcase;


	while (testcase--){
		//테스트케이스별 초기화
		memset(u, 'w', sizeof(u));
		memset(d, 'y', sizeof(d));
		memset(f, 'r', sizeof(f));
		memset(b, 'o', sizeof(b));
		memset(l, 'g', sizeof(l));
		memset(r, 'b', sizeof(r));
	

		cin >> n;
		for (int i = 0; i < n; i++){
			char tmp1, tmp2;
			cin >> tmp1 >> tmp2;
			v.push_back(make_pair(tmp1, tmp2));
		}
	

		for (int i = 0; i < v.size(); i++){
			rollbing(v[i].first, v[i].second);
		}





		for (int i = 1; i < 4; i++){
			for (int j = 1; j < 4; j++){
				cout << u[i][j];
			}
			cout << "\n";
		}
	}

	return 0;
}