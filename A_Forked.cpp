#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;

    int xK, yK;
    cin >> xK >> yK;

    int xQ, yQ;
    cin >> xQ >> yQ;

    vector<pair<int, int>> moves = {
        {a, b}, {-a, b}, {a, -b}, {-a, -b},
        {b, a}, {-b, a}, {b, -a}, {-b, -a}
    };

    set<pair<int, int>> dexK;
    set<pair<int, int>> dexQ;
    for (int i = 0; i < 8; i++) {
        dexK.insert({xK + moves[i].first, yK + moves[i].second});
    }
    for (int i = 0; i < 8; i++) {
        dexQ.insert({xQ + moves[i].first, yQ + moves[i].second});
    }

    int ans = 0;
    for (auto i : dexK) {
        if (dexQ.find(i) != dexQ.end()) {
            ans++;
        }
    }

    cout << ans << endl;
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
