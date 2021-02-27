

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;




struct Person {
    int age;
    string name;
    Person(int a, string b){
        age = a;
        name = b;
    }
};

int n;
vector<Person> v;

bool comp(const Person &a, const Person &b){
    return a.age < b.age;
}

int main(){

    cin >> n;
    for(int i=0;i<n;i++){
        int tmp;
        string tmp2;
        cin >> tmp >> tmp2;
        v.push_back(Person(tmp,tmp2));
    }

    stable_sort(v.begin(),v.end(),comp);

    for(int i=0;i<n;i++){
        cout << v[i].age << ' ' << v[i].name << '\n';
    }

    return 0;
}