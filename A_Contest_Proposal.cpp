#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int j = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (j == n)
            break;
        if (arr1[i] > arr2[j])
        {
            cnt++;
            i--;
        }
        j++;
    }
    cout << cnt << endl;
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
