#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,t;
    cin>>n>>t;
    int x=240-t;
    int cnt=0;
    int sum=0;
    for(int i=1;i<=n;i++)
    {       
        sum+=5*i;
        if(sum>x)break;
        cnt++;       
    }
    cout<<cnt<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
    return 0;
}