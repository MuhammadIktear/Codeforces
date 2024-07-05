#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, f, k;
    cin >> n >> f >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    int fav = a[f - 1];
    sort(a.rbegin(), a.rend());

    int greater = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > fav)
        {
            greater++;
        }
        else
        {
            break;
        }
    }

    int same = 0;
    for (int i = greater; i < n; ++i)
    {
        if (a[i] == fav)
        {
            same++;
        }
        else
        {
            break;
        }
    }

    if (greater >= k)
    {
        cout << "NO" << endl;
    }
    else if (greater + same <= k)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "MAYBE" << endl;
    }
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