#include <iostream>

using namespace std;



int main111()

{

    int age;



    cout << "여러분의 나이를 입력해 주세요 : ";

    cin >> age;

    int* print_age = &age;

    cout << *print_age << endl;

    age = 33333;
    printf("age는 %d\n", age);

    printf("print_age는 %d", *print_age);

//    cout << "여러분의 나이는 " << age << "살 입니다." << endl;;


    return 0;

}
