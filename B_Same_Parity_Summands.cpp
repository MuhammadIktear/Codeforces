#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort_vec(x) sort(x.begin(), x.end())
#define sortr_vec(x) sort(x.rbegin(), x.rend())
#define loop(s, i, n) for(int i = s; i < n; i++)
#define loopr(s, i, n) for(int i = n - 1; i >= s; i--)
#define loopa(u, x) for(auto u: x)
#define endl '\n'

void solve() {
    int n, k;
    cin >> n >> k;

    if (n % 2 == 1 && k % 2 == 0) {
        pn; 
    } else if (n < k) {
        pn; 
    } else {
        if (k % 2 == 1) {
            if (n % 2 == 0) {
                if (n - ((k - 1) * 2) < 1) {
                    pn;
                } else {
                    py;
                    loop(0, i, k - 1) cout << 2 << " ";
                    cout << n - ((k - 1) * 2) << endl;
                }
            } else {
                py;
                loop(0, i, k - 1) cout << 1 << " ";
                cout << n - (k - 1) << endl;
            }
        } else {
            if (n % 2 == 1) {
                pn;
            } else {
                py;
                loop(0, i, k - 1) cout << 1 << " ";
                cout << n - (k - 1) << endl;
            }
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
