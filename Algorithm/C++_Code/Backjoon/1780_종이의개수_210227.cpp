

#include <iostream>
using namespace std;

int ans[3] ={0,};
int n;
int arr[2188][2188];

bool checkarr(int x, int y, int size){
    int tmp = arr[x][y];
    for(int i=x;i<x+size; i++){
        for(int j=y; j<y+size; j++){
            if(tmp != arr[i][j]){
                return false;
            }
        }
    }
    return true;
}


void func(int x,int y, int size){
    if(!checkarr(x,y,size)){
        if(size/3 != 0){
            for(int i=x;i<x+size; i+=size/3){
                for(int j=y; j<y+size; j+=size/3){
                    func(i,j,size/3);
                }
            }
        } else {
            ans[arr[x][y]+1] += 1;
        }
    } else {
        ans[arr[x][y]+1] += 1;
    }
}


int main(){

    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    func(0,0,n);

    for(int i=0;i<3;i++){
        cout << ans[i] << '\n';
    }


    return 0;
}