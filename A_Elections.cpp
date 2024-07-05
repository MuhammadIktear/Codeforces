#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
        int val1 = max(a,max(b,c)+1) -a;
        int val2 = max(b,max(a,c)+1) -b;
        int val3 = max(c,max(a,b)+1) -c;
        cout<<val1<<" "<<val2<<" "<<val3<<endl;
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