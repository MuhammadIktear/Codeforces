#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 1) {
            cout << "NO" << endl;
        } else {
            string s;
            cout << "YES" << endl;
            for (int i = 0; i < n / 2; i++) {
                s += 'A' + i;
                s += 'A' + i;
            }
            cout << s << endl;
        }
    }
    return 0;
}
