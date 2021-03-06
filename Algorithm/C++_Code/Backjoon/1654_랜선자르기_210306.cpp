

#include <iostream>
#include <cmath>
using namespace std;


int k,n;
long long arr[1000001];

long long calc(int a ){
    long long ans =0;
    for(int i=0;i<k;i++){
        ans += arr[i]/a;
    }
    return ans;
}

int main(){

    cin >> k >> n;

    long long mm = (long long)pow(2,31)-1;
    for(int i=0;i<k;i++){
        cin >> arr[i];
        if(mm < arr[i]) mm = arr[i];
    }

    long long left = 1;
    long long right = mm;
    long long ans =0;

    while(left <= right){
        long long mid = (left +right)/2;
        if(calc(mid) < n){
           right = mid -1;
        } else {
            ans = mid;
            left = mid +1;
        }
    }


    cout << ans << '\n';

    return 0;
}