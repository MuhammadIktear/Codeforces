#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    int l=1;
    int r=1e18;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid-(mid/n)>=k)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
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