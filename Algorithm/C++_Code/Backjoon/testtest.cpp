#include <iostream>

using namespace std;



int main111()

{

    int age;



    cout << "�������� ���̸� �Է��� �ּ��� : ";

    cin >> age;

    int* print_age = &age;

    cout << *print_age << endl;

    age = 33333;
    printf("age�� %d\n", age);

    printf("print_age�� %d", *print_age);

//    cout << "�������� ���̴� " << age << "�� �Դϴ�." << endl;;


    return 0;

}
