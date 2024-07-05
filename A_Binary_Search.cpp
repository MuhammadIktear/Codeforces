#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

bool solve(vector<int>&v,int val)
{
    int sz=v.size();
    int l=0;
    int r=sz-1;
    
    while(l<=r)
    {
        int mid=(l+r)/2;
        if (v[mid]==val)return true;
        if(v[mid]<val)l=mid+1;
        else r=mid-1;
    }
    return false;
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
        bool b=solve(v,val);
        if(b==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
