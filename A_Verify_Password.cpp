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
    cin >> n;
    string s;
    cin >> s;
    bool b = false;
    loop(0, i, n - 1)
    {
        if (isalpha(s[i]) && !isalpha(s[i + 1])){pn;return;}
        else if ((isalpha(s[i]) && isalpha(s[i + 1]))||(!isalpha(s[i]) && !isalpha(s[i + 1])))
            if (s[i] > s[i + 1]){pn;return;}
    }
    py;
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
