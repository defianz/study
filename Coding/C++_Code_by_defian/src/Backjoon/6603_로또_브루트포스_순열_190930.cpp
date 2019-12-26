


#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	int n = 0;
	scanf("%d", &n);
	

	do{
		vector<int> s;
		vector<int> check;
		vector < vector<int>> ans;
		for (int i = 0; i < n; i++){
			int tmp;
			scanf("%d", &tmp);
			s.push_back(tmp);
		}
		
		for (int i = 0; i < n - 6; i++){
			check.push_back(0);
		}

		for (int i = 0; i < 6; i++){
			check.push_back(1);
		}

		do {
			vector<int> v_selected;
			for (int i = n-1; i >= 0; i--){
				if (check[i] == 1){
					v_selected.push_back(s[n - 1 - i]);
				}
			}
			ans.push_back(v_selected);

		} while (next_permutation(check.begin(), check.end()));
		
		sort(ans.begin(), ans.end());

		for (auto const a : ans){
			for (auto const q : a){
				printf("%d ", q);
			}
			printf("\n");
		}

		printf("\n");
		scanf("%d", &n);
	} while (n != 0);




	return 0;
}