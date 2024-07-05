#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int solve(vector<int>&v,int val)
{
    int sz=v.size();
    int l=0;
    int r=sz-1;
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if (v[mid]<=val)
        {
            ans=mid+1;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>v;
    while(n--)
    {
        int val;
        cin>>val;
        v.push_back(val);
    }
    while(k--)
    {
        int val;
        cin>>val;
        cout<<solve(v,val)<<endl;
    }
    return 0;
}
