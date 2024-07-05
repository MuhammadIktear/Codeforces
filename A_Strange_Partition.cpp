#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        cnt += ceil(double(val) / k);
        sum += val;
    }
    int ans1 = 0;
    if (sum % k == 0)
        ans1 = sum / k;
    else
        ans1 = (sum / k) + 1;
        cout<<ans1<<" "<<cnt<<endl;
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
