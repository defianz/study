

#include <iostream>
#include <vector>
using namespace std;

int arr[10][10];
int small[4][4][4][4];
vector<pair<int, int>> a;

bool check(int index, int tmp){
	for (int i = 0; i < 9; i++){
		if (arr[a[index].first][i] == tmp) return false;
		if (arr[i][a[index].second] == tmp) return false;
	}

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			if (small[a[index].first / 3][a[index].second / 3][i][j] == tmp) return false;
		}
	}

	return true;
}

void bf(int index){
	if (index == a.size()){
		for (int i = 0; i < 9; i++){
			for (int j = 0; j < 9; j++){
				cout << arr[i][j] << ' ';
			}
			cout << '\n';
		}
		exit(0);
	}

	for (int i = 1; i <= 9; i++){
		if (check(index, i)){
			arr[a[index].first][a[index].second] = i;
			small[a[index].first / 3][a[index].second / 3][a[index].first % 3][a[index].second % 3] = i;
			bf(index + 1);
			arr[a[index].first][a[index].second] = 0;
			small[a[index].first / 3][a[index].second / 3][a[index].first % 3][a[index].second % 3] = 0;
		}
	}
}

int main(){

	for (int i = 0; i < 9; i++){
		for (int j = 0; j < 9; j++){
			cin >> arr[i][j];
			if (arr[i][j] == 0) a.push_back(make_pair(i, j));
			small[i / 3][j / 3][i % 3][j % 3] = arr[i][j];
		}
	}

	bf(0);

	return 0;
}