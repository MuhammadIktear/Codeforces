#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
vector<int> find_path(vector<int> &p, int x)
{
    vector<int> path;
    map<int, int> mp;

    while (mp[x] == 0)
    {
        path.push_back(x);
        mp[x] = 1;
        x = p[x];
    }

    return path;
}

int find_res(vector<int>&v,vector<int>&a,int k)
{
    int res=0;
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        if(i>=k)break;
        int rem=k-i;
        int val=sum+(rem*a[v[i]]);
        res=max(res,val);
        sum+=a[v[i]];
    }
    return res;
}
void solve()
{
    int n, k, x, y;
    cin >> n >> k >> x >> y;
    vector<int> p(n + 1), a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> v = find_path(p, x);
    vector<int> s = find_path(p, y);
    int ans1=find_res(v,a,k);
    int ans2=find_res(s,a,k);
    if(ans1>ans2)cout<<"Bodya"<<endl;
    else if(ans1<ans2)cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}