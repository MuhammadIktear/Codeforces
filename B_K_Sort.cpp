#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s,i,n) for(int i=s;i<n;i++)
#define loopr(s,i,n) for(int i=n-1;i>=s;i--)
#define loopa(u,x) for(auto u:x)
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vec v(n);
    loop(0,i,n) cin >> v[i];
    vec b;
    int x = v[0];
    loopa(val,v) {
        x = max(x, val);
        if (x > val) {
            b.push_back(x - val);
        }
    }
    // loopa(val,b) {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    if (b.size() == 0) {
        cout << 0 << endl;
        return;
    }
    sort(b);
    // loopa(val,b) {
    //     cout<<val<<" ";
    // }
    cout<<endl;    
    int ans = b.back(), y = 0;
    loop(0,i,b.size()) {
        ans += (b[i] - y) * (b.size() - i);
        y = b[i];
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
