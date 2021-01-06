//
//  1062_가르침_210106.cpp
//  Algorithm
//
//  Created by salmon on 2021/01/06.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int n,k;
vector<string> v;
int ans = 0;
bool check[26]={false,};

int strcheck(vector<int> &a){
    
//    for(int i=0;i<26; i++){
//        cout << check[i];
//    }
//    cout <<'\n';
    
    int hap=0;
    for(int i=0;i<n;i++){
        string tmp = v[i];
        bool flag = true;
        
        for(int j=0; j<tmp.size(); j++){
            if(!check[tmp[j]-'a']){
                flag = false;
                break;
            }
        }
        if(flag) hap++;
//        bool flag2= true;
//
//        for(int j=0;j<tmp.size(); j++){
//            bool flag = false;
//            for(int x=0;x<a.size();x++){
//                if(tmp[j]-'a' == a[x]) {
//                    flag = true;
//                    break;
//                }
//            }
//            if(flag ==false){
//                flag2=false;
//                break;
//            }
//        }
//        if(flag2 == true) hap++;
    }
    return hap;
}

void bf(int index, vector<int> &a) {
    if(a.size() ==k){
        int hap = strcheck(a);
        ans = max(hap,ans);
        return;
    }
    
    if(index == 26) return;
    
    if(!check[index]){
        
        a.push_back(index);
        check[index] = true;
        
        bf(index+1, a);
        
        a.pop_back();
        check[index] = false;
    }
    
    bf(index+1, a);
    return;
}

int main(){
    cin >> n >> k;
    if(k<5){
        cout << 0 << '\n';
        return 0;
    }
    if(k==26){
        cout << n << '\n';
        return 0;
    }
    
    for(int i=0;i<n;i++){
        string tmp;
        cin >> tmp;
        tmp = tmp.substr(4,tmp.length());
        tmp.erase(unique(tmp.begin(),tmp.end()),tmp.end());
        v.push_back(tmp);
    }
    
    
    
    vector<int> a;
    a.push_back('a'-'a');
    a.push_back('c'-'a');
    a.push_back('i'-'a');
    a.push_back('n'-'a');
    a.push_back('t'-'a');
    
    check['a'-'a'] = true;
    check['c'-'a'] = true;
    check['i'-'a'] = true;
    check['n'-'a'] = true;
    check['t'-'a'] = true;
    
    bf(1,a);
    
    cout << ans << '\n';
    

    
    return 0;
}
