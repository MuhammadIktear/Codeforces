#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    while (b > 1)
    {
        if (b % 2 == 1)
        {
            b--;
        }
        b /= 2;
        c++;
    }
    cout<<c<<endl;
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