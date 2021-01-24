
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main(){
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++){
		int num;
		cin >> num;
		auto it = lower_bound(v.begin(), v.end(), num);
		if (it == v.end()){
			v.push_back(num);
		}
		else {
			*it = num;
		}

		
	}

	cout << v.size() << '\n';
	return 0;
}