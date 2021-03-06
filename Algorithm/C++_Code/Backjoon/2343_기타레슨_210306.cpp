


#include <iostream>
#include <vector>
using namespace std;

int n,m;
    vector<int> v;

bool calc(int mid){
    int cnt = 1;
    int tmp = v[0];
    for(int i=1;i<n;i++){
        // if(v[i] > mid) return false;
        if(tmp + v[i] > mid){
            tmp = v[i];
            cnt +=1;
        } else {
            tmp += v[i];
        }
    }
    return cnt <= m;
}

int main(){
    cin >> n >> m;


    int left = 0;
    int right = 0;

    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
        if(left < v[i]){
            left = v[i];
        }
        right += v[i];
    }

    int ans =0;

    while(left<=right){
        int mid = (left+right)/2;
        if(calc(mid)){
            ans = mid;
            right = mid -1;
        } else{
            left = mid +1;
        }
    }

    cout << ans << '\n';

    return 0;
}