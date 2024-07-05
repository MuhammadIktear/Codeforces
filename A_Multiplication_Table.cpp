#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int findDivisorsWithinLimit(int n, int limit) {
    vector<pair<int, int>> divisors;
    int sqrtN = sqrt(n);
    for (int i = 1; i <= sqrtN; ++i) {
        if (n % i == 0) {
            if (i <= limit) {
                if(n/i<=limit)
                divisors.push_back({i, n / i});
            }
            if (n / i <= limit && n / i != i) {
                if(i<=limit)
                divisors.push_back({n / i, i});
            }
        }
    }
    return divisors.size();
}

void solve()
{
    int n,a;
    cin>>n>>a;
    int sz=findDivisorsWithinLimit(a,n);
    cout<<sz<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}