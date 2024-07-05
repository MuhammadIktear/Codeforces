#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int cnt1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            cnt1++;
    }
    int max = 0;
    int x = 0;
    int y = 0;
    for (int i = 0; i < n; i++)
    {
        int one = 0;
        int zero = 0;
        if (arr[i] == 1)
            one++;
        if (arr[i] == 0)
            zero++;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == 1)
                one++;
            if (arr[j] == 0)
                zero++;
            if (max < zero - one)
            {
                max = zero - one;
                x = i;
                y = j;
            }
        }
    }

    for (int i = x; i <= y; i++)
    {
        if (arr[i] == 0)
            cnt1++;
        else
            cnt1--;
    }
    cout << cnt1 << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}