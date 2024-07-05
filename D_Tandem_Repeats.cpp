#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n - 1; i++) {
            if ((s[i] == s[i + 1]) || (s[i] == '?' && s[i + 1] == '?')) {
                ans = 1;
                break;
            }
        }

        for (int i = 2; i <= n - 1; i++) {
            vector<int> v;
            for (int j = 0; j < n - i; j++) {
                if ((s[j] == s[j + i]) || (s[j] == '?' && s[j + i] == '?')) {
                    v.push_back(j);
                }
            }
            sort(v.begin(), v.end());

            int mx = 1;
            int cnt = 1;
            for (int j = 1; j < v.size(); j++) {
                if (v[j] - 1 == v[j - 1]) {
                    cnt++;
                }
                else {
                    mx = max(mx, cnt);
                    cnt = 1;
                }
            }
            mx = max(mx, cnt);
            if (mx >= i) {
                ans = max(ans, i);
            }
        }

        cout << 2 * ans << endl;
    }
    return 0;
}
