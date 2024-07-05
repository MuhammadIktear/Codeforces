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
    int n, c;
    cin >> n >> c;
    vec a(n), b(n);
    vector<pair<int, int>> vp;

    loop(0, i, n)
    {
        cin >> a[i];
    }

    loop(0, i, n)
    {
        cin >> b[i];
    }

    loop(0, i, n)
    {
        vp.push_back({b[i], a[i]});
    }
    vp.push_back({c, n});
    sort(vp);
    int cost = c;
    n--;
    loopa(u, vp)
    {
        while (u.second > 0 && n > 0)
        {
            cost += u.first;
            u.second--;
            n--;
        }
    }
    cout << cost << endl;
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
