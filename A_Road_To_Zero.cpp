#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int x,y;
    cin>>x>>y;
    int a,b;
    cin>>a>>b;
    bool ok=false;
    int cost=0;
    if(b<=a*2)ok=true;
    if(ok==true)
    {
        int mini=min(x,y);
        cost+=mini*b;
        cost+=((max(x,y)-mini)*a);
        cout<<cost<<endl;
    }
    else
    {
        cost+=(x+y)*a;
        cout<<cost<<endl;
    }
    
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}