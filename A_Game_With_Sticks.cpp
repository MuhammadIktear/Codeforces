#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    int cnt=0;
    int y=n*m;
    while(y>0)
    {
        cnt++;
        y=y-(n+m-1);
        n--;
        m--;
    }
    if(cnt%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
    return 0;
}