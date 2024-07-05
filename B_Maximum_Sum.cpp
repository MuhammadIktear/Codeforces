#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9+7;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    int ans = 0;
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int mx = 0;
    for(int i =  0;i<n;i++)
    {
        mx+=a[i];
        ans = max(ans,mx);
        if(mx<0)
            mx = 0;
    }
    while(k--)
    {
        sum+=ans;
        sum = (sum+mod)%mod;
        ans=(ans*2)%mod;
    }
    cout<<sum<<endl;
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
