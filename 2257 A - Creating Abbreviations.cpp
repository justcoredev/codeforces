#include <iostream>
#include <string>
using namespace std;

int main(int, char**){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        string w[n], a[m];
        for (int i = 0; i < n; i++) cin >> w[i];
        for (int i = 0; i < m; i++) cin >> a[i];
        bool found = false;
        for (int i = 0; i < m; i++){
            for (size_t j = 0; j < a[i].size(); j++){
                found = false;
                for (int k = 0; k < n; k++){
                    if (w[k][0] == a[i][j] + 32){
                        found = true;
                        break;
                    }
                }
                if (!found) break;
            }
            if (!found) break;
        }
        if (found) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
