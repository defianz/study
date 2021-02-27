

#include <iostream>

using namespace std;

int n;
int arr[500001]={0,};
int b[500001]={0,};


long long solve(int start, int end){
    if (start == end ){
        return 0;
    }
    int mid = (start + end) /2;
    long long ans = solve(start,mid)+solve(mid+1,end);
    int i = start;
    int j = mid +1;
    int k = 0;

    while(i<=mid || j <= end){
        if(i<=mid && (j > end || arr[i] <= arr[j])){
            b[k++]=arr[i++];
        } else {
            ans += (long long)(mid -i +1);
            b[k++]=arr[j++];
        }
    }
    for(int i=start;i<=end; i++){
        arr[i] = b[i-start];
    }
    return ans;
}

int main(){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << solve(0,n-1) << '\n';

    return 0;
}