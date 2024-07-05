#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    int x=n/2;
    int step=x+n%2;
    while(step%k!=0)
    {
        if(x==0)break;
        x--;  
        step++;
    }
    if(step%k==0)cout<<step<<endl;
    else cout<<-1<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}