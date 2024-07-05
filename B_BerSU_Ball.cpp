#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    sort(arr1, arr1 + n, greater<int>());
    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    sort(arr2, arr2 + m, greater<int>());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (abs(arr2[j] - arr1[i]) <= 1)
            {
                cnt++;
                arr2[j] = INT_MAX;
                break;
            }
        }
    }
    cout << cnt << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}