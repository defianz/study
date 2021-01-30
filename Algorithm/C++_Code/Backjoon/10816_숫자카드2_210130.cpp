//
//  10816_숫자카드2_210130.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/30.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n,m;
int arr[500001];
int map[500001];
int cnt[500001];

int lb(int a){
    int ans=n;
    int l= 0;
    int r = n;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == a){
            ans = mid +1;
            l = mid +1;
        } else if (arr[mid] < a){
            l = mid + 1;
        } else {
            r = mid -1;
        }
    }
    return ans;
}

int ub(int a){
    int ans=n;
    int l= 0;
    int r = n;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == a){
            ans = mid - 1;
            r = mid - 1;
        } else if (arr[mid] < a){
            l = mid + 1;
        } else {
            r = mid -1;
        }
    }
    return ans;
}


int main(){
    
    cin >> n;
    for(int i=0;i<n;i++) cin>>arr[i];
    
    sort(arr,arr+n);
    
    cin >> m;
    for(int i=0;i<m;i++) cin>>map[i];
    
    for(int i=0; i<m; i++){
        int l = lb(map[i]);
        int u = ub(map[i]);
        if(l-u==0) cnt[i] =0;
        else cnt[i] = l-u-1;
        cout << cnt[i] << ' ';
        
    }
    cout << '\n';
    
    return 0;
}
