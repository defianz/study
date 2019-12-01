/*
 * 11726_2xn타일링.cpp
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
        dp[i] = (dp[i - 1] + dp[i - 2])%10007; // 이렇게 해야 채점을 통과하게 되어 있습니다.

    printf("%d", dp[n]); // 사실은 저 때가 아니라 마지막에 답을 출력할 때 %10007이 들어가야 하는게 아닌가요?

    return 0;
}


