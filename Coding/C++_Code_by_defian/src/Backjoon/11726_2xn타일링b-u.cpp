/*
 * 11726_2xnŸ�ϸ�.cpp
 *
 *  Created on: 2019. 7. 11.
 *      Author: iautm
 */

#include <stdio.h>

//int main(){
//
//	int m;
//	scanf("%d",&m);
//	int d11726bu[1001];
//
//	d11726bu[0] = 1;
//	d11726bu[1] = 1;
//
//	for(int i=2; i<=m; i++){
//		d11726bu[m] = (d11726bu[m-1]+d11726bu[m-2])%10007;
//	}
//	printf("%d",d11726bu[m]);
//
//	return 0;
//}
#include <stdio.h>
int main1172622()
{
    int n, i, dp[1001];

    dp[0] = 1;
    dp[1] = 1;

    scanf("%d", &n);

    for(i = 2; i <= n; i++)
        dp[i] = (dp[i - 1] + dp[i - 2])%10007; // �̷��� �ؾ� ä���� ����ϰ� �Ǿ� �ֽ��ϴ�.

    printf("%d", dp[n]); // ����� �� ���� �ƴ϶� �������� ���� ����� �� %10007�� ���� �ϴ°� �ƴѰ���?

    return 0;
}


