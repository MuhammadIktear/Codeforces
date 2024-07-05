#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> v1(n), v2(m);
    for (auto &a : v1) cin >> a;
    for (auto &a : v2) cin >> a;

    int l = 0, r = 0;

    while (l < n && r < m) {
        if (v1[l] < v2[r]) {
            cout << v1[l] << " ";
            l++;
        } else {
            cout << v2[r] << " ";
            r++;
        }
    }
    while (l < n) {
        cout << v1[l] << " ";
        l++;
    }
    while (r < m) {
        cout << v2[r] << " ";
        r++;
    }

    return 0;
}
