#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    int x=sum/n;
    for(int i=0;i<n-1;i++)
    {
        arr[i+1]+=arr[i]-x;

    }
    bool b=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<x)b=false;
    }
    if(b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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