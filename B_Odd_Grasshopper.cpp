#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int x,n;
    cin>>x>>n;
    for(int i=0;i<x;i++)
    {
        if(n%2==0)
        {
            n-=i;
        }
        else
        {
            n+=i;
        }
    }
    cout<<n<<endl;
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