

#include <stdio.h>

int arr[1001][101] = { 0, };

int main(){

	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	// 입력완료
	bool flag = true;
	bool fflag = true;
	for (int i = 1; i <= n - 1; i++){
		for (int j = 1; j <= m - 1; j++){
			for (int x = i + 1; x <= n; x++){
				for (int y = j + 1; y <= m; y++){
					if (arr[i][j] != arr[x][j] && arr[i][y] != arr[x][y]){
						if (arr[i][j] != arr[i][y]){
							flag = false;
							fflag = false;
							break;
						}
					}
				}
				if (fflag == false) break;
			}
			if (fflag == false) break;
		}
		if (fflag == false) break;
	}

	if (flag == true)printf("YES");
	else printf("NO");

	return 0;
}