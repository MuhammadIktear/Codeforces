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
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    vector<int> v(y);
    for (int &d : v)
    {
        cin >> d;
    }
    string ss;
    cin >> ss;
    set<int> se(v.begin(), v.end());
    vector<int> vv(se.begin(), se.end());
    sort(v);
    sort(ss);
    map<int, char> mp;
    for (int i = 0; i < vv.size(); ++i)
    {
        mp[vv[i]] = ss[i];
    }

    for (auto &u : mp)
    {
        s[u.first - 1] = u.second;
    }

    cout << s << endl;
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