#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    deque<pair<int, int>> d;
    vector<int> v(n);
    for (auto &a : v)
        cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > m)
        {
            d.push_back({v[i] - m, i + 1});
        }
    }
    int idx=-1;
    while (!d.empty())
    {
        for(auto u:d)
        {
            if(u.first>m)
            {
                d.push_back({u.first-m,u.second});
            }
            idx=u.second;
            d.pop_front();
        }
    }
    if(idx!=-1)
    cout<<idx<<endl;
    else cout<<n<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}