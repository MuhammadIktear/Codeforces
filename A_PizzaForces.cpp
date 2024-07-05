#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    if(n<6)cout<<15;
    else if(n%6==0)cout<<(n/6)*15;
    else if(n%6==1||n%6==2)cout<<15*(n/6-1)+20;
    else if(n%6==3||n%6==4)cout<<15*(n/6-1)+25;
    else cout<<15*(n/6+1);
    cout<<endl;

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