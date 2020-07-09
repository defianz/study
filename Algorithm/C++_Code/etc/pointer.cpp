

#include <stdio.h>

void test1(int &a){

	printf("test1 전 값: %d\n", a);
	printf("test1 전 주소: %d\n", &a);
	
	a = 111;
	
}

void test2(int *a){

	printf("test2 전 값: %d\n", *a);
	printf("test2 전 주소: %d\n", a);

	*a = 222;
}


int main(){

	int n = 11;

	int *test = &n;
	// 포인터는 초기 선언시, 주소값을 받아야 함, 리터럴 상수를 받을 수 없음 (주소값이 없기 때문)
	// 할당 한 후에는 포인터 값을 다른값으로 재할당 가능
	*test = 10;
	// *test 는 n 과 같음 => *test 변경시, n도 변경됨 ( 같은 주소값을 가지기 때문에 )
	printf("n: %d\n", n);
	// n: 10 출력

	// 함수에 넣었을때 확인하기
	printf("초기값 n : %d\n", n);
	printf("초기주소 &n : %d\n", &n);

	
	// 함수에 넣었을때, 전역변수가 아닌 변수를 전체적으로 변경하고 싶으면
	// 1. 함수에서 인자를 주소값으로 설정 (&n 으로 설정하고 변경함)
	test1(n);
	printf("1번방법 함수 나오면 n : %d\n", n);
	printf("1번방법 함수 나오면n 주소 n : %d\n", &n);
	// 2. test(&n) 으로 주고, 인자를 *n으로 받아서 *n을 변경한다.
	test2(&n);
	printf("2번방법 함수 나오면 n : %d\n", n);
	printf("2번방법 함수 나오면n 주소 n : %d\n", &n);
	// 3. static 변수로 설정
	// 이거는 따로 해보기

	// 위 방법을 실행해볼 경우 주소는 계속 변하지 않는다.


	return 0;
}