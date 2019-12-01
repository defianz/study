/*
* 1476.cpp
*
*  Created on: 2019. 6. 30.
*      Author: iautm
*/


#include <stdio.h>

int main1476(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int cnt = 0;
	bool tmp = true;

	while (true){
		int sol = 15 * cnt + a;


		if ((sol - b) % 28 == 0){
			if ((sol - c) % 19 == 0){
				printf("%d", sol);
				break;
			}
			else{
				cnt++;
			}
		}
		else{
			cnt++;
		}
	}


	return 0;
}

