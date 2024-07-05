#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        mp[val]++;
    }
    int cnt=0;
    for(auto u:mp)
    {
        if(u.second>=3)
        {
            while(u.second>=3)
            {
                cnt++;
                u.second-=3;
            }
        }
    }
    cout<<cnt<<endl;
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