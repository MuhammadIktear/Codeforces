#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s, i, n) for (int i = s; i < n; i++)
#define loopr(s, i, n) for (int i = n - 1; i >= s; i--)
#define loopa(u, x) for (auto u : x)
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vec> vv(n + 2, vector<int>(m + 2, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> vv[i][j];
        }
    }
    bool b;
    do {
        b = false;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (vv[i][j] > vv[i][j + 1] && 
                    vv[i][j] > vv[i][j - 1] &&
                    vv[i][j] > vv[i + 1][j] &&
                    vv[i][j] > vv[i - 1][j]) {
                    
                    int maxi = max({vv[i][j + 1], vv[i][j - 1], vv[i + 1][j], vv[i - 1][j]});
                    
                    if (vv[i][j] > maxi) {
                        vv[i][j] = maxi;
                        b = true;
                    }
                }
            }
        }
    } while (b);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << vv[i][j] << " ";
        }
        cout << endl;
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