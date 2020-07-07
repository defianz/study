

#include <iostream>

using namespace std;

int n, m;
int ans = 1000000;
bool broken[10] = { false, };


int wjfeo(int a){

	int ret;
	if (a > 0){
		return a;
	}
	return (-1) * a;
}


int findasw(int a){
	int tmp3 = a;
	int cnt = 0;


	while (tmp3){
		if (broken[tmp3 % 10]){
			return 1000000;
		}
		else {
			tmp3 /= 10;
			cnt++;
		}
	}

	if (a == 0){
		if (broken[a]){
			return 1000000;
		}
		else {
			cnt++;
		}
	}

	int aa = wjfeo(n - a) + cnt;
	int bb = wjfeo(a - n) + cnt;
	int cc = wjfeo(n - 100);
	return (aa < bb) ? (aa < cc) ? aa: cc  : (bb<cc) ? bb: cc ;
}


int main(){

	
	cin >> n;
	cin >> m;



	for (int i = 0; i < m; i++){
		int tmp = 0;
		cin >> tmp;
		broken[tmp] = true;
	}

	if (n == 100){
		cout << 0<< '\n';
		return 0;
	}

	if (m == 10){
		cout << wjfeo(n - 100) << '\n';
		return 0;
	}


	for (int i = 0; i < 1000000; i++){
		int tmp2 = findasw(i);
		if (tmp2 < ans) ans = tmp2;
	}

	cout << ans << '\n';

	return 0;
}