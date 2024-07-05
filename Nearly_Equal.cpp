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
    string s, ss;
    cin >> s >> ss;    
    int mini = INT_MAX;    
    loop(0, i, n - m + 1) {
        int c = 0;
        loop(0, j, m) {
            if (s[i + j] != ss[j]) {
                c++;
            }
        }
        mini = min(mini, c);
    }
    
    cout << mini << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
