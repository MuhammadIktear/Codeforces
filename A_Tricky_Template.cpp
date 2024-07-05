#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    string a,b,c;
    cin>>a>>b>>c;
    bool f=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=c[i]&&b[i]!=c[i])
        {
            f=true;
            break;
        }
    }
    if(f==true)cout<<"YES"<<endl;
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