#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int mini=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mx=arr[0],mn=arr[0],c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx) c++, mx = arr[i];
        if(arr[i]<mn) c++, mn = arr[i];
    }    
    cout<<c<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}