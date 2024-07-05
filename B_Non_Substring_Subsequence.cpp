#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            bool ok = false;
            string x = s.substr(l - 1, r - l + 1);
            
            for (ll i = 0; i < n; i++)
            {
                if (i < l - 1 && s[i] == x[0])
                    ok = true;
                if (i >= r && s[i] == x.back())
                    ok = true;
            }

            if (ok)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
