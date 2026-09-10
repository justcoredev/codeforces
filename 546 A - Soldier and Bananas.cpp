#include<iostream>
#include<cmath>
using namespace std;
#define ll long long

int main(){ // arithmetic progression
    ll k, n, w; cin >> k >> n >> w;
    cout << max(w * (2 * k + (w - 1) * k) / 2 - n, 0LL) << '\n';
    return 0;
}