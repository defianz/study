

#include <iostream>
#include <algorithm>
using namespace std;
#define INF 987654321

int n,m;
int d[10];
char c[10];
int  ans = -INF;



int calc(int gap1,int gap2, char a){
	int res = 0;
	if (a == '+') res = gap1 + gap2;
	else if (a == '-') res = gap1 - gap2;
	else if (a == '*') res = gap1 * gap2;
	//cout << "��1 : " << gap1 << " ��2 : " << gap2 << " �� res : " << res << "\n";
	return res;
}


void bp(int hap,int idx, char curcal){
	//cout << "�ε��� ���� " << idx << " ���� " << hap << "  curcal�� " << curcal << " \n";
	if (idx == m){
		ans = max(hap, ans);
	}

	if (idx + 2 <= m){
		//���ϰ� �ϰ�
		bp(calc(hap, calc(d[idx + 1], d[idx + 2], c[idx + 1]), curcal), idx + 2, c[idx + 2]);
		// ���ϰ� ���ϰ�
		bp(calc(hap, d[idx + 1], curcal), idx + 1, c[idx + 1]);
	}
	
	else if (idx + 1 <= m){
		// ���ϰ� ���ϰ�
		bp(calc(hap, d[idx + 1], curcal), idx + 1, c[idx + 1]);
	}

}

int main(){

	cin >> n;
	m = n / 2;
	for (int i = 0; i <m; i++){
		cin >> d[i];
		cin >> c[i];
	}
	cin >> d[m];
	//cout << "m�� " << m << "\n";

	//for (int i = 0; i <= m+1; i++){
	//	cout << d[i] << " \n";
	//}
	//

	bp(d[0],0,c[0]);
	

	cout << ans << "\n";

	return 0;
}