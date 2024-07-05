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
    int n, k;
    cin >> n >> k;

    vec v(n);
    loop(0, i, n) {
        v[i] = i + 1;
    }

    int curr = 0;
    int l = 0, r = n - 1;

    while (curr < k && l < r) {
        int d = r - l;
        if (curr + 2 * d <= k) {
            swap(v[l], v[r]);
            curr += 2 * d;
            l++;
            r--;
        } else {
            r--;
        }
    }

    if (curr == k) {
        py;
        loop(0, i, n) {
            cout << v[i] << " ";
        }
        cout << endl;
    } else {
        pn;
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
