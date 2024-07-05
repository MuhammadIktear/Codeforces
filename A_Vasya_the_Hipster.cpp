#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<b<<" "<<(a-b)/2<<endl;
    else cout<<a<<" "<<(b-a)/2<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}