#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        mini=min(mini,abs(val));
    }
    cout<<mini<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}