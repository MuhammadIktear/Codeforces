#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)cin>>arr[i];
    bool flag=0;
    for(int i=1;i<=n;i++)
    {
        
        if(arr[i]==arr[arr[arr[i]]])
        {
            flag=1;
            break;
        }
    }
    if(flag)cout<<2<<endl;
    else cout<<3<<endl;
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