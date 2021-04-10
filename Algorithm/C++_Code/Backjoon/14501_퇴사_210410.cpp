

#include <iostream>
using namespace std;

int n;
int t[16];
int p[16];
int ans =0;

void foo(int day, int hap, int last){
    if(day > n+1 ){
        hap -= last;
        if(ans < hap ) ans = hap;
        return;
    } else if (day == n+1){
        if(ans < hap ) ans = hap;
        return;
    }

    for(int i=day; i<=n ; i++){
        foo(i+t[i],hap+p[i],p[i]);
    }

}

int main(){
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> t[i] >> p[i];
    }


    for(int i=1; i<=n; i++){
        foo(i+t[i],p[i],p[i]);
    }

    cout << ans << '\n';
    return 0;
}