//
//  TEST.cpp
//  studyC
//
//  Created by salmon on 2020/07/11.
//  Copyright © 2020 salmon. All rights reserved.
//

#include <stdio.h>

void test(int *a , int *b){
    
    
    printf("swap 함수에서 초기 값 : %d %d\n", *a, *b);
    printf("swap 함수에서 초기 주소 값 : %d %d\n\n", a, b);
    
    int tmp = *b;
    *b = *a;
    *a = tmp;
    
    // **실수한 내용
    // a,b의 포인터의 값이 아닌, 변수 메모리 주소를 swap 하려했으나,
    // 아래와 같이 진행하게 되면, (주소만 swap됨)
    // 기존 : *a = &arr[0], *b = &arr[1] 에서
    // *a = &arr[1], *b = &arr[0]
    // 이 될 뿐 주소의 값은 swap 되지 않는다.
    
    
    //int *tmp = b;
    //b = a;
    //a = tmp;
    
    printf("swap 함수에서 처리 후 값 : %d %d\n", *a, *b);
    printf("swap 함수에서 처리 후 주소 값 : %d %d\n\n", a, b);

}

int main(){
    
    
    int arr[2] = {1,2};
    
    printf("main 함수에서 초기 값 : %d %d\n", arr[0], arr[1]);
    printf("main 함수에서 초기 주소 값 : %d %d\n\n", &arr[0], &arr[1]);
    
    
    test(&arr[0],&arr[1]);
    
    for(int i=0; i<2;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
