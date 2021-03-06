

#include <iostream>
#include <vector>
using namespace std;

int n;
long long m;
vector<long long> v;

bool calc(long long a){
    long long tmp = 0;
    for(int i=0;i<n;i++){
        if(v[i]-a >=0) tmp += (v[i]-a);
    }
    return tmp >= m;
}

int main(){

    cin >> n >> m;

    long long high = 0;
    for(int i=0;i<n;i++){
        long long tmp;
        cin >> tmp;
        v.push_back(tmp);
        if(high < tmp) high = tmp;
    }

    long long left = 1;
    long long right = high;
    long long ans=0;

    while(left <= right){
        long long mid = (left+right)/2;
        if(calc(mid)){
            ans = mid;
            left = mid +1;
        } else {
            right = mid -1;
        }
    }

    cout << ans << '\n';

    return 0;
}