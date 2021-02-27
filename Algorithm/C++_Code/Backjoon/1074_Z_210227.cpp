
#include <iostream>
#include <cmath>
using namespace std;

int n,r,c;

// int arr[33000][33000];

// // 2^15 32768

// void solve(int x, int y, int start, int size){
//     if(size ==1){
//         arr[x][y] = start;
//         arr[x][y+1] = start+1;
//         arr[x+1][y] = start+2;
//         arr[x+1][y+1] = start+3;
//     } else {
//         solve(x,y,start,size-1);
//         solve(x,y+(int)pow(2,size-1), start+(pow(2,size-1)*pow(2,size-1)), size-1);
//         solve(x+(int)pow(2,size-1), y, start+(pow(2,size-1)*pow(2,size)), size -1);
//         solve(x+(int)pow(2,size-1), y+(int)pow(2,size-1), start+(pow(2,size-1)*pow(2,size))+(pow(2,size-1)*pow(2,size-1)), size -1);
//         }
// }


// int main(){

//     cin >> n >> r >> c;
    
//     solve(0,0,0,n);

//     cout << arr[r][c] << '\n';

//     // for(int i=0;i<pow(2,n); i++){
//     //     for(int j=0;j<pow(2,n); j++){
//     //         cout << arr[i][j] << ' ';
//     //     }
//     //     cout << '\n';
//     // }

//     return 0;
// }


int solve(int a, int b, int size){
    if (size == 1){
        return 2*a+b;
    } else {
        if(a < pow(2,size-1)){
            if(b < pow(2,size-1)){
                return solve(a,b,size-1);
            } else {
                return solve(a,b-pow(2,size-1),size-1)+ pow(pow(2,size-1),2);
            }
        } else {
            if(b < pow(2,size-1)){
                return solve(a-pow(2,size-1),b,size-1) + 2*pow(pow(2,size-1),2);
            } else {
                return solve(a-pow(2,size-1),b-pow(2,size-1),size-1) + 3*pow(pow(2,size-1),2);
            }
        }
    }
}

int main(){

    cin >> n >> r >> c;

    cout << solve(r,c,n) << '\n';


    return 0;
}