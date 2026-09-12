#include <bits/stdc++.h>
using namespace std;

int main(){
    int s=7, a[s];
    for (int i = 0; i < s; i++) cin >> a[i];
    sort(a, a + s);
    cout << a[0] << " " << a[1] << " " << (a[2] == a[0] + a[1] ? a[3] : a[2]) << '\n';
    return 0;
}
