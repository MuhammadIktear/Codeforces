#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for(int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    vector<int>v(n);
    v[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        v[i]=v[i-1]+arr[i];
    }
    for(int i=0;i<m;i++)
    {
        cout << (lower_bound(v.begin(), v.end(), arr2[i])
                - v.begin())+1<<endl;
    }
}


int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}