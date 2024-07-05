#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> v(n, 0);
    set<int> s;
    for (int i = n - 1; i >= 0; i--) {
        s.insert(arr[i]);
        v[i] = s.size();
    }

    while (m--) {
        int x;
        cin >> x;
        cout << v[x - 1] << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
