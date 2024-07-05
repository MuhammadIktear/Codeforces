#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << 2 + (c / b) + (c / a)<<endl;
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
