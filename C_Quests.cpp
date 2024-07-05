#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a,b;
    cin>>a>>b;
    int arr1[a],arr2[a];
    for(int i=0;i<a;i++)cin>>arr1[i];
    for(int i=0;i<a;i++)cin>>arr2[i];
    vector<pair<int,int>>p;
    for(int i=0;i<a;i++)
    {
        p.push_back({arr1[i],arr2[i]});
    }
    int sum=p[0].first;
    for(int i=0;i<p.size();i++)
    {
       
    }
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