#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    vector<int>v(n,0);
    for(int i=1;i<n;i++)
    {
        v[i]=v[i-1]+(s[i]==s[i-1]?1:0);
    }
    int m;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        l--,r--;
        cout<<v[r]-v[l]<<endl;
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}