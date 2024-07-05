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
        int n, k;
        cin >> n >> k;
        vec v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vec s = v;
        sort(s);
        vec vv(s.begin(), s.begin() + k);
        int c = 0;
        for (int i = 0; i < k; i++) {
            if (find(vv.begin(), vv.end(), v[i]) != vv.end()) {
                c++;
            }
        }
        int ans = k - c;
        cout << ans << endl;
    
}


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}