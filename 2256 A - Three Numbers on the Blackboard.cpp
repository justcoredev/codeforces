#include<iostream>
#include<cmath>
using namespace std;

int main(){
    // 1. minimize max
    // 2. maximize min (?)
    // range = max - min
    int t; cin >> t;
    while (t--){
        int a[3];
        int *l = &a[0], *h = &a[0], *m = nullptr;
        for (int i = 0; i < 3; i++){
            cin >> a[i]; 
            if (a[i] < *l) l = &a[i];
            if (a[i] > *h) h = &a[i];
        }
        for (int i = 0; i < 3; i++){
            if (&a[i] != l && &a[i] != h) m = &a[i];
        }
        while (true){
            if (*l + *m < *h) *h = *l + *m;
            else break;
        }
        cout << *h - *l << '\n';
    }
    return 0;
}