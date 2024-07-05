#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int a, b;
    cin >> a >> b;
    vector<int> v1(a);
    vector<int> v2(a);
    for (auto &u : v1)
        cin >> u;
    for (auto &u : v2)
        cin >> u;
    sort(v2.rbegin(), v2.rend());
    bool bol = false;
    for (int i = 0; i < a; i++) {
        if ((v1[i] + v2[i]) > b)
            bol = true;
    }
    if (bol)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
