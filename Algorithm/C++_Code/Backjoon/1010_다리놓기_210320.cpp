

#include <iostream>
using namespace std;

int n,m;
long long pas[31][31];

long long foo(int a, int b){
    if(pas[a][b]) return pas[a][b];
    else return pas[a][b] = foo(a-1,b-1) + foo(a-1,b);

}

int main(){

    int testcase;
    for(int i=1; i<=30; i++){
        pas[i][0] = 1;
        pas[i][i] = 1;
    }

    cin >> testcase;

    while(testcase--){

        cin >> n >> m;
        if(n==m) {
            cout << 1 << '\n';
            continue;
        }
        if(n==1){
            cout << m << '\n';
            continue;
        }

        long long ans = foo(m,n);
        
        cout << ans << '\n';
    }

    return 0;
}