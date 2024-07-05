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
    vec a(n), b(n);
    loop(0, i, n) cin >> a[i];
    loop(0, i, n) cin >> b[i];
    int c1 = 0, c2 = 0, P = 0, N = 0;
    loop(0, i, n) {
        if (a[i] == b[i]) {
            if (a[i] == -1) c2--;
            else if (a[i] == 1) c1++;
        }
    }
    int sa = 0, sb = 0;
    loop(0, i, n) {
        if (a[i] == b[i]) continue;
        if (a[i] > b[i]) sa += a[i];
        else sb += b[i];
    }

    if (sa > sb) swap(sa, sb);
    int x = min(sb - sa, c1);
    sa += x;
    c1 -= x;
    x = c1 / 2;
    c1 -= x;
    sa += max(x, c1);
    sb += min(x, c1);
    if (sa > sb) swap(sa, sb);
    x = max(sa - sb, c2);
    sb += x;
    c2 -= x;
    x = c2 / 2;
    c2 -= x;
    sa += max(x, c2);
    sb += min(x, c2);
    cout << min(sa, sb) << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
