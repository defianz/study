

/*
 * 1676_���丮��0�ǰ���_����.cpp
 *
 *  Created on: 2019. 7. 28.
 *      Author: iautm
 */


#include <stdio.h>

int main1676(){
	int n, cnt;
	scanf("%d",&n);
	cnt =0;

	for (int i=1; i<=n; i++){
		int tmp = i;
		while(tmp % 5 == 0 ){
			cnt ++;
			tmp /= 5;
		}
	}

	printf("%d", cnt);
	return 0;
}
