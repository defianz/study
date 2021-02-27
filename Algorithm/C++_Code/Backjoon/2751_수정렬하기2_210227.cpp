

#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1000000];


// void swap(int *a, int *b){
//     int tmp = *b;
//     *a = *b;
//     *b= tmp;
// }

int choosepivot(int x, int y){
    return x + (y-x) /2;
}

int partition(int start,int end){
    int pivot = choosepivot(start,end);
    int pv = arr[pivot];
    swap(arr[pivot],arr[end]);

    int k = start;
    for(int i=start;i<end;i++){
        if(arr[i]<pv){
            swap(arr[i],arr[k]);
            k++;
        }
    }
    swap(arr[end],arr[k]);

    return k;
}


void qsort(int start,int end){
    if(start < end){
        int p = partition(start,end);
        qsort(start,p-1);
        qsort(p+1,end);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

   for(int i=0;i<n;i++){
        cout << arr[i] << '\n';
    }
    return 0;
}