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
    if(n!=v[0])
    {
        cout<<"NO"<<endl;
        return;
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" "<<n-i<<endl;
        if(v[i]>n-i)flag=1;
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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