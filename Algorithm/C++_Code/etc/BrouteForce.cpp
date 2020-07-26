

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

bool check[10] = { false, };
int nan1[10] = { 0, };
int max = 0;
vector<int> chnan1;


void bp(int count){
	if (count == 7){
		int sum = 0;
		for (int i = 0; i < chnan1.size(); i++){
			sum += chnan1[i];
		}
		if (sum == 100){
			sort(chnan1.begin(), chnan1.end());
			for (int i = 0; i < chnan1.size(); i++){
				printf("%d\n", chnan1[i]);
			}
		}
		return;
	}

	for (int i = 0; i < 9; i++){
		if (check[i] == false){
			check[i] = true;
			chnan1.push_back(nan1[i]);
			bp(count++);
			check[i] = false;
			chnan1.pop_back();
		}
	}

	return;
}



int main(){
	
	for (int i = 0; i < 9; i++){
		scanf("%d", &nan1[i]);
	}

	bp(0);



	return 0;
}