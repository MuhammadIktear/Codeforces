#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>arr2(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
    }
    sort(arr2.begin(),arr2.end());
    vector<int>pre(n);
    vector<int>pre2(n);
    pre[0]=arr[0];
    pre2[0]=arr2[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=arr[i]+pre[i-1];
        pre2[i]=arr2[i]+pre2[i-1];
    }

    int m;
    cin>>m;
    while(m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        b--,c--;
        if(a==1)
        {
            if(b-1>=0){
                cout<<pre[c]-pre[b-1]<<endl;
            }
            else cout<<pre[c]<<endl;
        }
        else
        {
            if(b-1>=0){
                cout<<pre2[c]-pre2[b-1]<<endl;
            }
            else cout<<pre2[c]<<endl;
        }
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}