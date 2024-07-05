#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,m;
    cin>>n>>m;
    if(n<m)cout<<"No"<<endl;
    else{
        if(n%2==0&&m%2==0)cout<<"Yes"<<endl;
        else if(n%2==1&&m%2==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

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