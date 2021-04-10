
#include <iostream>
using namespace std;

int n,b,c;
int arr[1000001];
bool visited[1000001];
long long ans;

int main(){
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }    
    cin >> b >> c;


    for(int i=0; i<n; i++){
        arr[i] = arr[i] - b;
        ans += 1;
        if(arr[i] <= 0){
            visited[i] = true;
        }
    }

    for(int i=0; i<n; i++){
        if(!visited[i]){
            if(arr[i] % c == 0){
                ans += (arr[i] / c);
            } else {
                ans += ((arr[i] / c ) +1) ;
            }
        }
    }

    cout << ans << '\n';

    return 0;
}