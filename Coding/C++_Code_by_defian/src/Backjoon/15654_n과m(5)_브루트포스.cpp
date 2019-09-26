


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> v;
vector<int> check(10001);
bool visited[10001] = { false, };


void dp(int count){
	if (count == m){
		for (int i = 0; i < m; i++){
			cout << check[i];
			if (i != m-1){
				cout << ' ';
			}
			else {
				cout << '\n';
			}
		}
		return;
	}

	for (int i = 0; i < v.size(); i++){
		if (visited[i] == false){
			visited[i] = true;
			check[count] = v[i];
			dp(count+1);
			//check.pop_back();
			visited[i] = false;
			
		}
	}

}

int main(){
	
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}

	sort(v.begin(), v.end()); 

	dp(0);



	return 0;
}