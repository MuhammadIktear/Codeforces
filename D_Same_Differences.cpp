#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int sum=0;
    map<int,int>mp;
    for(int i=1;i<=n;i++)
    {
        int val;
        cin>>val;
        mp[val-i]++;
    }
    for(auto u:mp)
    {
        u.second--;
        sum+=u.second*(1+u.second)/2;
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