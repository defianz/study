

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int n,m;
int a,b;
int low = 1000000001;
int high = 1;
vector<pair<int, int> > v[100001];
bool check[100001];

bool calc(int w, int now){
    if(now == b) return true;
    if(check[now]) return false;
    check[now] = true;

    for(int i=0;i<v[now].size();i++){
        if(v[now][i].second >= w ){
            int next = v[now][i].first;
            if(calc(w,next)){
             return true;
            };
        }
    }
    return false;
}

int main(){
    cin >> n >> m;
    

    for(int i=0;i<m;i++){
        int t1,t2,t3;
        cin >> t1 >> t2 >> t3;
        v[t1].push_back(make_pair(t2,t3));
        v[t2].push_back(make_pair(t1,t3));
        if(high < t3 ) high = t3;
        if(low > t3 ) low = t3;
    }

    cin >> a >> b;

    int left = low;
    int right = high;
    int ans =0;

    while(left <= right){
        int mid = (left+right)/2;
        memset(check,false,sizeof(check));
        if(calc(mid, a)){
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << ans << '\n';

    return 0;
}