#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
        int n;
        cin >> n; 
        
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--; 
        }
        
        int result = 0;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] == i) {
                swap(a[i + 1],a[i]);
                result++;
            }
        }
        if (a[n - 1] == n - 1) {
            result++;
        }
        
        cout << result << endl;
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
