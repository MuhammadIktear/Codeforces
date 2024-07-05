#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int a=n/2;
    int ans=0;
    for(int i=1;i<=a;i++)
    {
        ans+=(8*i)*i;
    }
    cout<<ans<<endl;
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