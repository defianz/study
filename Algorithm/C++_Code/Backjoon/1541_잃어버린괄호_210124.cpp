

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
	string in;
	cin >> in;
	
	vector<int> v;
	vector<char> a;
	int tmp = 0;;
	for (int i = 0; i < in.size(); i++){
		if (in[i] == '-'){
			v.push_back(tmp);
			a.push_back('-');
			tmp = 0;
		}
		else if (in[i] == '+'){
			v.push_back(tmp);
			a.push_back('+');
			tmp = 0;
		}
		else {
			tmp = tmp * 10 + (in[i] - '0');
		}
	}
	v.push_back(tmp);

	int ans = v[0];

	bool flag = true;
	for (int i = 0; i < a.size(); i++){
		if (a[i] == '-'){
			flag = false;
			ans -= v[i + 1];
		}
		else {
			if (flag == false){
				ans -= v[i + 1];
			}
			else {
				ans += v[i + 1];
			}
		}
	}


	cout << ans << '\n';

	return 0;
}