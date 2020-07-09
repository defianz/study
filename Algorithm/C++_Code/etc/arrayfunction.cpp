

#include <stdio.h>


void test(int tmp[]){
	// 주소가 오는거기때문에 int *tmp 로 받을수도 있다.

	printf("tmp 사이즈 : %d\n", sizeof(tmp));
	// 해당 값은 4가 나오며, 이는 포인터 인것을 알 수 있다.

	printf("함수 안 배열 주소 : %d\n", tmp);
	// arr 의 주소값이 나온다.
	tmp[0] = 10;
	// 함수안에서 값을 변경해도 전체적으로 변경되는지 테스트
}

int main(){

	int arr[10] = { 9, 1, 2, 4, 5, 6, 2, 3, 7, 8 };

	printf("배열 주소 : %d\n", &arr);
	printf("배열 주소 : %d\n", arr);
	printf("배열 주소 (arr[0]) : %d\n", &arr[0]);
	// 위 세개 모두 arr의 메모리 주소를 나타낸다.

	test(arr);
	// 해당 배열을 함수에 전달한다 ( 주소가 전달된다. )

	printf("변경된 값이 제대로 될까? : %d\n", arr[0]);
	// 같은 주소의 값을 변경하는거기때문에 정상적으로 작동함/ 10 출력!!
	return 0;
}