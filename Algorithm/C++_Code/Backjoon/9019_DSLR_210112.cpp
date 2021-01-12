

#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int dd(int arg){
	return arg * 2 % 10000;
}

int ss(int arg){
	return arg  == 0 ? 9999 : arg - 1;
}

int ll(int arg){
	int a = arg / 1000;
	int tmp = arg % 1000 * 10 + a;
	return tmp;
}

int rr(int arg){
	int a = arg % 10;
	int tmp = arg / 10 + a * 1000;
	return tmp;
}

int dist[10000];
int from[10000];
string how[10000];

int main(){
	int testcase;
	cin >> testcase;

	while (testcase--){
		int a, b;
		memset(dist, -1, sizeof(dist));
		memset(from, -1, sizeof(from));

		cin >> a >> b;

		queue<int> q;
		q.push(a);
		dist[a] = 0;
		how[a] = "";


		while (!q.empty()){
			int st = q.front();
			q.pop();
			

			if (st == b){
				int tmp = st;
				vector<string> v;
				while (true){
					v.push_back(how[tmp]);
					tmp = from[tmp];
					if (tmp == -1) break;
				}
				for (int i = v.size() - 1; i >= 0; i--){
					cout << v.at(i);
				}

				cout << '\n';
				break;
			}

			for (int dir = 0; dir < 4; dir++){
				if (dir == 0){
					int nst = dd(st);
					if (dist[nst] != -1) continue;
					dist[nst] = dist[st] + 1;
					from[nst] = st;
					how[nst] = "D";
					q.push(nst);
				}
				else if (dir == 1){
					int nst = ss(st);
					if (dist[nst] != -1) continue;
					dist[nst] = dist[st] + 1;
					from[nst] = st;
					how[nst] = "S";
					q.push(nst);
				}
				else if (dir == 3){
					int nst = rr(st);
					if (dist[nst] != -1) continue;
					dist[nst] = dist[st] + 1;
					from[nst] = st;
					how[nst] = "R";
					q.push(nst);

				}
				else {
					int nst = ll(st);
					if (dist[nst] != -1) continue;
					dist[nst] = dist[st] + 1;
					from[nst] = st;
					how[nst] =  "L";
					q.push(nst);
				}
			}
		}

	}

	return 0;
}