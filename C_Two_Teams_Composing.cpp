#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sortv(x) sort(x.begin(), x.end())
#define sortrv(x) sort(x.rbegin(), x.rend())
#define loop(s, i, n) for (int i = s; i < n; i++)
#define loopr(s, i, n) for (int i = n - 1; i >= s; i--)
#define loopa(u, x) for (auto u : x)
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp;
    loop(0, i, n)
    {
        int vl;
        cin >> vl;
        mp[vl]++;
    }

    int max_frequency = INT_MIN;
    for (auto u : mp)
    {
        if (u.second > max_frequency)
        {
            max_frequency = u.second;
        }
    }
    int x=mp.size()-1;
    if(max_frequency-x>=2)
    {
        cout<<x+1<<endl;
    }
    else if(max_frequency-x<0)
    {
        cout<<max_frequency<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
