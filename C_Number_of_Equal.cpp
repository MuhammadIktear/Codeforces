#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);
    for (auto &a : v1) cin >> a;
    for (auto &a : v2) cin >> a;
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        mp[v1[i]]++;
    }

    int cnt = 0;
    for (int i = 0; i < m; ++i) {
        cnt += mp[v2[i]];
    }

    cout << cnt;

    return 0;
}

