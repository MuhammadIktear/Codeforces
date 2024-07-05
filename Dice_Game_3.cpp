#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    if (n > 1)
    {
        int x = (n / 2) * 13;
        int y = (n % 2) * 6;
        sum = x + y;
    }
    else
        sum = 6;
    cout << sum << endl;
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
