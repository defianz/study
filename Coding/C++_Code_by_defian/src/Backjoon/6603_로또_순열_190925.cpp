

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int n;



int main(){
	scanf("%d", &n);
	do{
		

		vector<int> v_s;
		vector<int> v_check;
	
		vector<vector<int>> ans;

		for (int i = 0; i < n; i++){
			int tmp;
			scanf("%d", &tmp);
			v_s.push_back(tmp);
		}

		
		for (int i = 0; i < n - 6; i++){
			v_check.push_back(0);
		}
		for (int i = 0; i < 6; i++){
			v_check.push_back(1);
		}


		do{
			vector<int> v_selected;
			for (int i = 0; i < n; i++){
				if (v_check[i] == 1){
					v_selected.push_back(v_s[i]);
				}
			}
			ans.push_back(v_selected);


		} while (next_permutation(v_check.begin(), v_check.end()));

		sort(ans.begin(), ans.end());
		for (auto &a : ans){
			for (int i = 0; i < a.size(); i++){
				printf("%d ", a[i]);
			}
			printf("\n");
		}
		printf("\n");



		scanf("%d", &n);
	} while (n != 0);

	return 0;
}