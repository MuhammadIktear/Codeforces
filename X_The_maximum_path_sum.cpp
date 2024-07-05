#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll path_sum(ll n, ll m, ll arr[][11], ll i, ll j) {
    if (i == n - 1 && j == m - 1) {
        return arr[i][j];
    }

    if (i >= 0 && i < n && j >= 0 && j < m) {
        ll op1 = path_sum(n, m, arr, i + 1, j) + arr[i][j];
        ll op2 = path_sum(n, m, arr, i, j + 1) + arr[i][j];

        return max(op1, op2);
    }

    return 0;
}

int main() {
    ll n, m;
    cin >> n >> m;

    ll arr[n][11]; 
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    ll result = path_sum(n, m, arr, 0, 0);
    cout << result << endl;

    return 0;
}
