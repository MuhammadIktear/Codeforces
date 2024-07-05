#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n, r;
    cin >> n >> r;
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }
    
    int cnt = 0;
    string ch = "ABCDEFG";
    
    for (char c : ch) {
        if (mp.find(c) != mp.end()) {
            if (mp[c] < r) {
                cnt += r - mp[c];
            }
        } else {
            cnt += r;
        }
    }
    
    cout << cnt << endl;
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
