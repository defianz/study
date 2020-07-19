//
//  15650_nm(2)_vector.cpp
//  studyC
//
//  Created by salmon on 2020/07/19.
//  Copyright © 2020 salmon. All rights reserved.
//

//자연수 N과 M이 주어졌을 때, 아래 조건을 만족하는 길이가 M인 수열을 모두 구하는 프로그램을 작성하시오.
//
//1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
//고른 수열은 오름차순이어야 한다.
//
//첫째 줄에 자연수 N과 M이 주어진다. (1 ≤ M ≤ N ≤ 8)


#include <iostream>
#include <vector>
using namespace std;

int n,m;
bool flag[9]={false,};



void fn(int cnt, int start, vector<int> t){
    if(cnt == m){
        for (vector<int>::iterator iter = t.begin(); iter != t.end(); ++iter){
            cout << *iter << " ";
        }
        cout << "\n";
        return;
    }
    for(int i=start; i<=n ;i++){
        if(!flag[i]){
            flag[i] = true;
            t.push_back(i);
            fn(cnt+1,i+1, t);
            t.pop_back();
            flag[i] = false;
            
        }
    }
}

int main(){
    cin >> n >> m;
    
    vector<int> v;
    fn(0,1,v);
    
    return 0;
}
