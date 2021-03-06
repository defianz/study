



#include <iostream>
#include <algorithm>

using namespace std;

int n;
int c;
int arr[200001];

bool calc(int a){
    int brr[200001];
    brr[0]=arr[0];
    int cnt =0;
    for(int i=1;i<n;i++){
        if(arr[i]-brr[cnt]<a){
            continue;
        } else {
            brr[cnt+1] = arr[i];
            cnt += 1;
        }
        if(cnt + 1 >= c) return true;
    }
    return false;
}

int main(){

    cin >> n >> c;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    sort(arr,arr+n);

    int left=1;
    int right = arr[n-1];
    int ans =0;

    while(left<=right){
        
        int mid = (left+right)/2;
        if(calc(mid)){
            ans = mid;
            left= mid+1;
        } else {
            right = mid-1;
        }
    }

    cout << ans << '\n';




    return 0;
}