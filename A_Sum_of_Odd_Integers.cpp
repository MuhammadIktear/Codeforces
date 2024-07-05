#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;

    if (n % 2 != k % 2 || n < k * k) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
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
