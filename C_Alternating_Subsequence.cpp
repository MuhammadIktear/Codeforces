#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int sum = 0;
    int j = 0;

    while(j < n)
    {
        if(arr[j] < 0)
        {
            int minn = LLONG_MIN;
            while(j < n && arr[j] < 0)
            {
                minn = max(minn, arr[j]);
                j++;
            }
            sum += minn;
        }
        else if(arr[j] > 0)
        {
            int maxp = LLONG_MIN;
            while(j < n && arr[j] > 0)
            {
                maxp = max(maxp, arr[j]);
                j++;
            }
            sum += maxp;
        }
        else
        {
            j++;
        }
    }

    cout << sum << endl;
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
