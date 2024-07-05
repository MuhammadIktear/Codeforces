#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        sum+=val;
    }
    int x=sqrt(sum);
    if(x*x==sum)cout<<"YES"<<endl;
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