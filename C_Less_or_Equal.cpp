#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s, i, n) for (int i = s; i < n; i++)
#define loopr(s, i, n) for (int i = n - 1; i >= s; i--)
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    vec v(n);
    loop(0, i, n)
    {
        cin >> v[i];
    }
    sort(v);
    if (v[0]==1&&k==0){
        cout<<-1<<endl;
    }
    else if(k==0)cout<<v[0]-1<<endl;
    else
    {
        k--;
        if (k < n - 1)
        {
            if (v[k] != v[k + 1])
                cout << v[k];
            else
                cout << -1 << endl;
        }
        else
            cout << v[k] << endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}