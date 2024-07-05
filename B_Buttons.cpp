#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int ans=n;
    for(int i=1;i<n;i++)
    {
        ans+=(n-i)*i;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}