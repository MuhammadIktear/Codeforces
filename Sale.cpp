#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    
    vector<int> s(n);
    vector<int> pre(n + 1, 0);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        pre[i + 1] = pre[i] + s[i];
    }

    int maxi = *max_element(s.begin(), s.end());
    int maxDay = find(s.begin(), s.end(), maxi) - s.begin();
    int totals = 0;
    for (int i = 0; i < n; i++) {
        if (i == maxDay) {
            totals = max(totals, pre[i] + s[i] * 2);
        } else {
            totals = max(totals, pre[i + 1] + s[i]);
        }
    }
    
    cout << totals << endl;
}




int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
