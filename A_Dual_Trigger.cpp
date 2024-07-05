#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt++;
        }
    }
    bool b = true;
    if (cnt % 2 != 0)
    {
        b = false;
    }
    if (cnt == 2)
    {
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                b = false;
                break;
            }
        }
    }

    if (b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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