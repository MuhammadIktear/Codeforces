#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb push_back
#define loop(s, i, n) for (int i = s; i < n; i++)
#define loopr(s, i, n) for (int i = n - 1; i >= s; i--)
#define loopa(u, x) for (auto u : x)
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vec a(n), b(n + 1);
    loop(0, i, n)cin >> a[i];
    loop(0, i, n + 1) cin >> b[i];
    int d = INT_MAX;
    int ans = 0;
    loop(0,i,n)
    {
        ans += abs(a[i] - b[i]);
        if(min(a[i],b[i])<=b[n] && max(a[i],b[i])>=b[n]){
            d=0;
 
        }
        d=min(min(abs(a[i]-b[n]),abs(b[i]-b[n])),d);
    }
    cout<<ans+d+1<<endl;
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
