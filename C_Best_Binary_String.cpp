#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
        string s;
        cin >> s;
        char x = '0';
        for (auto &c : s)
        {
            if (c == '?')
                c = x;
            x = c;
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