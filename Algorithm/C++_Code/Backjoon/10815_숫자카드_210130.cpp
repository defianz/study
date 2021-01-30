//
//  10815_숫자카드_210130.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/30.
//


#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[500001];
int map[500001];
int check[500001];

int binary(int a){
    int l=0;
    int r=n;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == a){
            return 1;
        } else if(arr[mid]>a){
            r = mid -1;
        } else if(arr[mid] < a){
            l = mid +1;
        }
    }
    return 0;
}


int main(){
    
    cin >> n;
    
    for(int i=0;i<n;i++) cin >> arr[i];
    
    cin >> m;
    for(int i=0;i<m;i++) cin >> map[i];
    
    sort(arr,arr+n);
    
    for(int i=0;i<m;i++){
        check[i] = binary(map[i]);
    }
    
    for(int i=0;i<m;i++){
        cout << check[i] << ' ';
    }
    
    cout << '\n';
    
    return 0;
}
