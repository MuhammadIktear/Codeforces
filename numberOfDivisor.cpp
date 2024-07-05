#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int N = 1e7 + 123;
int divisors[N];

void solve() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j += i) {
            divisors[j]++;
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << i << ":" << divisors[i] << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
