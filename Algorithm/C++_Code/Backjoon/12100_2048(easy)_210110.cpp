//
//  12100_2048(easy)_210110.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/10.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ans = 0;
int LIMIT = 5;

int n;
int arr[21][21];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

vector<int> gen(int k){
    vector<int> a(LIMIT);
    for (int i=0; i<LIMIT; i++){
        a[i] = (k&3);
        k>>=2;
    }
    return a;
}

void move(int &arr[][], int dir, vector<pair<int,int>> &v){
    if(dir == 0){
        
    }
}

int check(int arr[21][21], vector<int> &dirs){
    int tmp=0;
    vector<pair<int,int> > v;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != 0 ) v.push_back(make_pair(i,j));
        }
    }
    
    for(int dir : dirs){
        move(arr,dir,v);
    }
    
    for(int i=0;i<v.size(); i++){
        tmp = max(tmp,arr[v[i].first][v[i].second]);
    }
    return tmp;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int k=0; k < (1<<LIMIT*2); k++){
        vector<int> dir = gen(k);
        int cur = check(arr,dir);
        if (ans < cur) ans = cur;
    }
    
    cout << ans << '\n';
    
    return 0;
}
