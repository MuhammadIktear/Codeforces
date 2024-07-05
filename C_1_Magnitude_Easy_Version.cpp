#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int m1 = 0, m2 = 0;
        for (int i = 0; i < n; ++i) {
            m2 += arr[i];
            m1 = max(m1 + arr[i], abs(m1 + arr[i]));
            if (abs(m2) > m1) {
                m1 = abs(m2);
            }
        }

        cout << m1 << endl;

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