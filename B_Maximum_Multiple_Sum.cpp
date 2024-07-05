#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    int x = 2;
    int m = 0;
    for (int i = 2; i <= n; i++) {
        int k = n / i;
        int sum = i * k * (k + 1) / 2;
        if (sum > m) {
            m = sum;
            x = i;
        }
    }
    cout << x << endl;
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