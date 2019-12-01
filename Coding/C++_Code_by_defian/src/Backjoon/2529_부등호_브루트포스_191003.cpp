

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int k;
int v[10];
char boo[10];
bool visited[11];
string str = "";
string min_str = "9999999999";
string max_str = "-1";

void dfs(int count, int prev){
	if (count >= k){
		min_str = min(min_str, str);
		max_str = max(max_str, str);
		return;
	}


	if (boo[count] == '<'){
		for (int i = prev+1; i < 10; i++){
			if (!visited[i]){
				visited[i] = true;
				str += (char)(i + '0');
				dfs(count + 1,i);
				visited[i] = false;
				str.erase(count + 1, 1);
			}
		}
	}
	else{
		for (int i = prev-1; i >= 0; i--){
			if (!visited[i]){
				visited[i] = true;
				str += (char)(i + '0');
				dfs(count + 1,i);
				visited[i] = false;
				str.erase(count + 1, 1);
			}
		}
	}
}


int main(){

	cin >> k;
	for (int i = 0; i < k; i++){
		cin >> boo[i];
	}

	//for (int i=0;i<k;i++){
	//	printf("%c\n", boo[i]);
	//}


	for (int i = 0; i < 10; i++){
		visited[i] = true;
		str += (char)(i + '0');
		dfs(0,i);
		visited[i] = false;
		str.erase(0, 1);
	}

	
	cout << max_str << '\n' << min_str;

	return 0;
}