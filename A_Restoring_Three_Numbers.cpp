    #include <bits/stdc++.h>
    using namespace std;
    #define int long long
    #define endl '\n'

    void solve()
    {
        vector<int> a(4);
        for (int i = 0; i < 4; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << a[3] - a[0] << " " << a[3] - a[1] << " " << a[3] - a[2] << endl;
    }

    int32_t main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
            solve();
        return 0;
    }