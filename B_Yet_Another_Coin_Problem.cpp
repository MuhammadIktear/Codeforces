#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int mini = INT_MAX;
int coins[] = {15, 10, 6, 3, 1};
void coinwant(int n, int x)
{
    int cnt = 0;
    for (int i = x; i < 5; i++)
    {
        if (n == 0)
            break;
        if (n / coins[i] > 0)
        {
            cnt += n / coins[i];
            n = n % coins[i];
        }
    }
    mini = min(cnt, mini);
}
void solve()
{
    int n;
    cin >> n;
    int a, b;
    int x = n / 15;
    int y = 0;
    if (x > 0)
        y = x - 1;
    for (int i = 0; i < 5; i++)
    {
        coinwant(n - (x * 15), i);
        a = x + mini;
    }
    mini = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        coinwant(n - (y * 15), i);
        b = y + mini;
    }
    cout << min(a, b) << endl;
    mini = INT_MAX;
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
