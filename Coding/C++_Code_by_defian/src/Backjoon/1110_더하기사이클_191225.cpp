

#include <stdio.h>

int main(){

	int n,cnt;
	scanf("%d", &n);
	// �Է¿Ϸ�

	// �������
	int stmp = n;
	cnt = 0;

	do{
		int tmp = stmp / 10 + stmp % 10;
		int a = tmp % 10;
		int b = stmp % 10;
		stmp = b * 10 + a;
		cnt += 1;
	} while (n != stmp);

	// ���

	printf("%d", cnt);

	return 0;
}