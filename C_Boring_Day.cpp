#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.j())
#define sortr(x) sort(x.rbegin(), x.rj())
#define loop(s, i, n) for(int i = s; i < n; i++)
#define loopr(s, i, n) for(int i = n - 1; i >= s; i--)
#define loopa(u, x) for(auto u: x)
#define endl '\n'

void solve() {
    int n, l, r;
    cin >> n >> l >> r;    
    vec a(n);
    loop(0, i, n)cin >> a[i];  
    int x = 0,sum = 0,i = 0;
    for (int j = 0; j < n; ++j) {
        sum += a[j];        
        while (sum > r && i <= j) {
            sum -= a[i];
            i++;
        }        
        if (sum >= l && sum <= r) {
            x++;
            sum = 0;
            i = j + 1;
        }
    }   
    cout << x << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
