


#include <iostream>
using namespace std;

int n;
long long dist[100001];
long long  pri[100001];

int main(){

    cin >> n;

    for(int i=0;i<n-1;i++){
        cin >> dist[i];
    }

    for(int i=0;i<n;i++){
        cin >> pri[i];
    }

    int tmp =0;
    long long ans = pri[0]*dist[0];

    for(int i=1;i<n-1;i++){
        if(pri[tmp] >= pri[i]){
            tmp = i;
        }
        ans += pri[tmp]* dist[i];
    }

    cout << ans << '\n';

    return 0;
}