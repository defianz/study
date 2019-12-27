

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string board[51];
int ans = 65;

string whiteFirst[8] = {
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" }
};

string blackFirst[8] = {
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" },
	{ "BWBWBWBW" },
	{ "WBWBWBWB" }
};

void foo(int x, int y){
	int bans = 0;
	int wans = 0;

	for (int i = x; i <= x + 7; i++){
		for (int j = y; j <= y + 7; j++){
			if (board[i][j] != blackFirst[i - x][j - y]){
				bans++;
			}
			if (board[i][j] != whiteFirst[i - x][j - y]){
				wans++;
			}
		}
	}

	int tmp = min(wans, bans);
	ans = min(tmp, ans);

}

int main(){
	int n, m;
	cin >> n >> m;
	
	
	for (int i = 0; i < n; i++){
		cin >> board[i];
	}


	for (int i = 0; i < n - 7; i++){
		for (int j = 0; j < m-7; j++){
			foo(i, j);
		}
	}

	cout << ans << '\n';

	return 0;
}