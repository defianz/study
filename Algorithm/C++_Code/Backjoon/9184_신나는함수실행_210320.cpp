

#include <iostream>
using namespace std;

int a, b, c;
int tmp[51][51][51]={0,};

int foo(int x, int y, int z ){
    if(x <= 0 || y <= 0 || z <=0 ) return 1;
    if(tmp[x][y][z] != 0) return tmp[x][y][z];
    else if(x > 20 || y> 20 || z >20){
       return tmp[x][y][z] = foo(20,20,20);
    }
    else if(x<y && y<z) return tmp[x][y][z] = foo(x,y,z-1)+foo(x,y-1,z-1)-foo(x,y-1,z);
    else return tmp[x][y][z] = foo(x-1,y,z) + foo(x-1,y-1,z) + foo(x-1,y,z-1) - foo(x-1,y-1,z-1);
}

int main(){

    while (cin >> a >> b >> c){
        if(a == -1 && b == -1 && c == -1) return 0;

        cout << "w(" << a << ", " << b << ", " << c << ") = " << foo(a,b,c) << '\n';
    }

    return 0;
}