#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &u:v)cin>>u;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==i+1)cnt++;
    }
    cout<<(cnt+1)/2<<endl;
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