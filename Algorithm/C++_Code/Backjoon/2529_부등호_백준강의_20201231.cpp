
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int k;
char arr[10];
bool check[10];
string min_str = "9999999999";
string max_str = "-1";

bool compare(int a, int b, char t){
	if (t == '<') return  a < b;
	else return a > b;
}


void func(int num, int count, int tmp[]){
	if (count == k ){
		string str = "";
		for (int i = 0; i < k+1; i++){
			str += (char)(tmp[i] + '0');
		}
		min_str = min(min_str, str);
		max_str = max(max_str, str);
	}

	for (int i = 0; i <= 9; i++){
		if (check[i] == false && compare(num, i, arr[count])){
			check[i] = true;
			tmp[count + 1] = i;
			func(i, count + 1, tmp);
			check[i] = false;
		}
	}

}

int main(){
	
	cin >> k;

	for (int i = 0; i < k; i++)
		cin >> arr[i];
	
	int tmp[10];
	for (int i = 0; i <= 9; i++){
		check[i] = true;
		tmp[0] = i;
		func(i, 0, tmp);
		check[i] = false;
	}

	cout << max_str << '\n';
	cout << min_str << '\n';

	return 0;
}