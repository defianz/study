 



#include <stdio.h>
#include <cstring>
#include <algorithm>
using namespace std;

int maps[10][10] = { -1, };

bool visited[10][10] = { true, };

int main(){

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			printf("%d ", maps[i][j]);

		}
		printf("\n");
	}
	
	memset(maps, 0, sizeof(maps));
	for (int i = 0; i < 10; i++){
		
	}


	memset(visited, true, sizeof(visited));

	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			printf("%d ", maps[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < 10; i++){
		for (int j = 0; j < 10; j++){
			printf("%d ", visited[i][j]);
		}
		printf("\n");
	}

	return 0;
}