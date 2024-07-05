#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

vector<int> v;
const int N = 1e5;

void all(int n)
{
    if (n > N)
        return;
    v.push_back(n);
    all(n * 10);
    all(n * 10 + 1);
}

void solve()
{
    
    int n;
    cin >> n;
    
    for (int i = 0; i < v.size() - 1; i++)
    {
        while (n % v[i] == 0)
        {
            n = n / v[i];
        }
    }
    if (n == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    all(1);
    sort(v.rbegin(),v.rend());
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
