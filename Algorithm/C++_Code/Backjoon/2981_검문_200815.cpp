//
//  2981_검문_200815.cpp
//  studyC
//
//  Created by salmon on 2020/08/15.
//  Copyright © 2020 salmon. All rights reserved.
//
//문제
//트럭을 타고 이동하던 상근이는 경찰의 검문을 받게 되었다. 경찰은 상근이가 운반하던 화물을 하나하나 모두 확인할 것이기 때문에, 검문하는데 엄청나게 오랜 시간이 걸린다.
//
//상근이는 시간을 때우기 위해서 수학 게임을 하기로 했다.
//
//먼저 근처에 보이는 숫자 N개를 종이에 적는다. 그 다음, 종이에 적은 수를 M으로 나누었을 때, 나머지가 모두 같게 되는 M을 모두 찾으려고 한다. M은 1보다 커야 한다.
//
//N개의 수가 주어졌을 때, 가능한 M을 모두 찾는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 종이에 적은 수의 개수 N이 주어진다. (2 ≤ N ≤ 100)
//
//다음 줄부터 N개 줄에는 종이에 적은 수가 하나씩 주어진다. 이 수는 모두 1보다 크거나 같고, 1,000,000,000보다 작거나 같은 자연수이다. 같은 수가 두 번 이상 주어지지 않는다.
//
//항상 M이 하나 이상 존재하는 경우만 입력으로 주어진다.
//
//출력
//첫째 줄에 가능한 M을 공백으로 구분하여 모두 출력한다. 이때, M은 증가하는 순서이어야 한다.
//
//예제 입력 1
//3
//6
//34
//38
//예제 출력 1
//2 4


#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
int arr[101]={0,};
int sol[501]={0,};
int cnt = 0;


// 시간 초과
//int main(){
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
//
//    sort(arr,arr+n);
//
//    for(int i=2;i<arr[n-1];i++){
//        bool flag=true;
//        int tmp = arr[0]%i;
//        for(int j=1; j<n;j++){
//            if(arr[j]%i != tmp) {
//                flag=false;
//                break;
//            }
//        }
//        if(flag) printf("%d ",i);
//    }
//    return 0;
//}

int gcd(int a, int b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    
    sort(arr,arr+n);
    
    int bm = arr[1]-arr[0];
    // arr[i]-arr[i-1] 의 최대공약수를 고른다.
    for(int i=2; i<n;i++){
        bm= gcd(bm,arr[i]-arr[i-1]);
    };
    
    
    // 약수 구하는 가장 빠른 방법
    // 30의 약수를 구할때, 5가 약수인걸 알면 30/5 =6 을 알 수 있는것처럼, 짝을 바로 구해나간다.
    for(int i=2; i*i<=bm;i++){
        if(bm % i==0){
            sol[cnt++]=i;
            if(i*i != bm) sol[cnt++]=bm/i;
        }
    };
    // 위 i=2 로 진행하여, 1의 짝인 bm이 들어가지 못해 넣어줌
    sol[cnt++]=bm;
    
    // 오름차순이므로, 정렬 후 출력하기
    sort(sol,sol+cnt);
    for(int i=0;i<cnt;i++){
        printf("%d ",sol[i]);
    }
    
    return 0;
}
