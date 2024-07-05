#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(val%2==0)v1.push_back(val);
        else v2.push_back(val);
    }
    int x=1;
    int cnt=0;
    for(int i=0;i<v1.size();i++)
    {
        cnt+=n-x;
        x++;
    }
    for(int i=0;i<v2.size();i++)
    {
        for(int j=i+1;j<v2.size();j++)
        {
            if(__gcd(v2[i],v2[j])>1)cnt++;
        }
    }
    cout<<cnt<<endl;
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