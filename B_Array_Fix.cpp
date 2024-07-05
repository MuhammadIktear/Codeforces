#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        bool b = false;
        for (int i = n - 2; i >= 0; --i) {
            if (v[i + 1] >= v[i]) {
                continue;
            }
            if (v[i] < 10) {
                b = true;
                break;
            }
            int l = v[i];
            int r = l % 10;
            l = l / 10;
            if (v[i + 1] >= r && l <= r) {
                v[i] = l;
            } else {
                b = true;
                break;
            }
        }

        if (b) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
