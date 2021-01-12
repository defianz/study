
#include <iostream>
using namespace std;

int a, b, c;
int ans = 0;
bool arr[1501][1501];

void bfs(int a, int b, int c){

	if (a > b) return;
	if (a == b && a != c) return;
	if (a == b && b == c) {
		ans = 1;
		return;
	}

	b = b - a;
	a = 2 * a;
	c = c;
	if (arr[a][b] == true) return;
	else {
		arr[a][b]= true;
		bfs(a, b, c);
		bfs(a, c, b);
		bfs(b, a, c);
		bfs(b, c, a);
		bfs(c, a, b);
		bfs(c, b, a);
	}
}

int main(){
	cin >> a >> b >> c;

	bfs(a, b, c);
	bfs(a, c, b);
	bfs(b, a, c);
	bfs(b, c, a);
	bfs(c, a, b);
	bfs(c, b, a);
	


	cout << ans << '\n';
	return 0;
}