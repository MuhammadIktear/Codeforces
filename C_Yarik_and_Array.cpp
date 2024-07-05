#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s, i, n) for (int i = s; i < n; i++)
#define loopr(s, i, n) for (int i = n - 1; i >= s; i--)
#define loopa(u, x) for (auto u : x)
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vec a(n);
    loop(0, i, n) cin >> a[i];
    int ans = INT_MIN, curr = 0;
    loop(0, i, n)
    {
        if (i > 0 and (abs(a[i - 1]) % 2) == (abs(a[i]) % 2))
        {
            curr = a[i];
            ans = max(ans, curr);
        }
        else
        {
            curr = max(a[i], curr + a[i]);
            ans = max(ans, curr);
        }
    }

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