#include <iostream>
using namespace std;

#define int long long
#define endl '\n'

int ans(int n, int cnt) {
    if (n == 1) return cnt;
    if (n % 6 == 0) return ans(n / 6, cnt + 1);
    else if (n % 6 != 0) {
        n *= 2;
        if (n % 6 == 0) return ans(n / 6, cnt + 2);
        else return -1;
    }
}

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    cout << ans(n, cnt) << endl;
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
