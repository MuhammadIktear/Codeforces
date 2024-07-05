#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=arr[0];
    int y=arr[n-1];
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)cnt1++;
        else break;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==y)cnt2++;
        else break;
    }
    if(cnt1==n or cnt2==n)cout<<0<<endl;
    else if(x==y)
    {
        cout<<n-(cnt1+cnt2)<<endl;
    }
    else
    cout<<n-(max(cnt1,cnt2))<<endl;
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