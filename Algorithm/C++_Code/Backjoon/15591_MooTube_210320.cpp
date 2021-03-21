
#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
using namespace std;

int n,q;
int k, start;

int cnt = 0;
int pot[5001];
bool check[5001];


struct node {
    vector<pair<int,int> > next;
};

vector<node> v(5001);

void foo(int start, int zmin){
    check[start] = true;
    for(int i=0; i<v[start].next.size();i++){
        int nt = v[start].next[i].first;
        if(check[nt] == true) continue;
        int usado = zmin < v[start].next[i].second ? zmin : v[start].next[i].second;
        pot[nt] = usado;
        foo(nt,usado);
    }
}

int main(){
    cin >> n >> q;
    
    for(int i=0; i <n-1; i++){
        int fr, to, point;
        cin >> fr >> to >> point;

        v[fr].next.push_back(make_pair(to,point));
        v[to].next.push_back(make_pair(fr,point));
    }


    for(int i=0;i<q;i++){
        cin >> k >> start;
        cnt = 0;
        memset(pot,0,sizeof(pot));
        memset(check,false,sizeof(check));
        
        foo(start,1000000001);
        
        for(int j=1; j<=n; j++){
            if(j == start ) continue;
            if(pot[j] >= k) cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}