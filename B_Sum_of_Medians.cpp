#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n*k];
    for(int i=0;i<n*k;i++)cin>>arr[i];
    int sum=0;
    for(int i=(n-1)/2*k;i<n*k;i+=n/2+1)sum+=arr[i];
    cout<<sum<<endl;
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
