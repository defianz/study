//����
//���� N�� �־����� ��, ���μ������ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ���� N(1 �� N �� 10, 000, 000)�� �־�����.
//
//���
//N�� ���μ����� ����� �� �ٿ� �ϳ��� ������������ ����Ѵ�.


#include <stdio.h>
#include <cmath>
using namespace std;
int N;

int main(){
	scanf("%d", &N);

	while (N != 1){
		for (int i = 2; i <= N; i++){
			if (N%i == 0){
				N /= i;
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}