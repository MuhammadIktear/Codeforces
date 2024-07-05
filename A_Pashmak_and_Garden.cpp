#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s,i,n) for(int i=s;i<n;i++)
#define loopr(s,i,n) for(int i=n-1;i>=s;i--)
#define endl '\n'

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x3, y3, x4, y4;
    if (x1 == x2) {
        int s = abs(y2 - y1);
        x3 = x1 + s;
        y3 = y1;
        x4 = x2 + s;
        y4 = y2;
    } else if (y1 == y2) {
        int s = abs(x2 - x1);
        x3 = x1;
        y3 = y1 + s;
        x4 = x2;
        y4 = y2 + s;
    } else if (abs(x2 - x1) == abs(y2 - y1)) {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    } else {
        cout << -1 << endl;
        return;
    }
    if (abs(x3) > 100 or abs(y3) > 100 or abs(x4) > 100 or abs(y4) > 100) {
        cout << -1 << endl;
    } else {
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    }
}


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}