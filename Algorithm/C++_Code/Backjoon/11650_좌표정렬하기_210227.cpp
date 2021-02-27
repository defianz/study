

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int n;
vector<pair<int,int> > v;


int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;

        v.push_back(make_pair(tmp1,tmp2));
    }

    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }

    return 0;
}