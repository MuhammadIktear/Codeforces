#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=1;i<=a;i++)
    {
        ans++;
        if(i%b==0)a++;
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