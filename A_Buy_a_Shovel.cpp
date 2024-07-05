#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a,b;
    cin>>a>>b;
    int i=0;
    int c=a;
    while(true)
    {
        i++;
        a=c*i;
        if(a%10==0||a%10==b)break;
    }
    cout<<i<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
    return 0;
}