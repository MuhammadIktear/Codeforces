#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mini = INT_MAX;
    int l = 0, r = 0;
    int sum = arr[0];
    int a = 0;
    while (r < n)
    {
        r++;
        k--;
        if (k < 1)
        {
            if (mini > sum)
            {
                mini = sum;
                a = l;
            }
            sum -= arr[l];
            l++;
            k++;
        }
        sum += arr[r];
    }
    cout<<a+1<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}