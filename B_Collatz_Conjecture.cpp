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

int ans(int x, int y, int k) {
    int r = x % y;
    int st = y - r;
    if (k < st) {
        return x + k;
    }
    if (k == st) {
        x += k;
        while (x % y == 0) {
            x /= y;
        }
        return x;
    }

    while (true) {
        int t = st;
        if (x == 1) {
            break;
        }
        if (k >= t) {
            k -= t;
            x += t;
            while (x % y == 0) {
                x /= y;
            }
            st = y - x % y;
        } else {
            x += k;
            k = 0;
            break;
        }
    }

    if (k != 0) {
        return k % (y - 1) + 1;
    }
    return x;
}

void solve() {
    int x, y, k;
    cin >> x >> y >> k;
    cout << ans(x, y, k) << endl;
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
