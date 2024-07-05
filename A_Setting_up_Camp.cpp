#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t=b%3;
    if(t==1&&c<2)cout<<-1<<endl;
    else if(t==2&&c<1)cout<<-1<<endl;
    else{
    double x = b + c;
    int ans = a + ceil(x / 3);
    cout << ans << endl;
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
