#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int k,q;
    cin>>k>>q;
    int arr1[k];
    int arr2[q];
    for(int i=0;i<k;i++)cin>>arr1[i];
    for(int i=0;i<q;i++)cin>>arr2[i];
    int cnt=0;
    for(int i=0;i<q;i++)
    {
       if(arr2[i]<arr1[0])cout<<arr2[i]<<" ";
       else cout<<arr1[0]-1<<" ";
    }
    cout<<endl;
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