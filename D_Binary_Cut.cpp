#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    int c = 0;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' and s[i + 1] == '1')
        {
            c = -1;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            c++;
        }
    }
    cout << c + 1 << endl;
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