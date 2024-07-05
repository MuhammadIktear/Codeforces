#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s, i, n) for (int i = s; i < n; ++i)
#define loopr(s, i, n) for (int i = n - 1; i >= s; --i)
#define loopa(u, x) for (auto u : x)
#define endl '\n'

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sz1 = s1.size();
    int sz2 = s2.size();
    int sol = sz2;
    loop(0, i, sz2)
    {
        int c = i; 
        int x = i; 
        loop(0, j, sz1)
        {
            if (s1[j] == s2[x])
            {
                x++;
                if (x == sz2)
                {
                    break;
                }
            }
        }
        sol = min(sol, c + sz2 - x);
    }
    cout << sol + sz1 << endl;
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
