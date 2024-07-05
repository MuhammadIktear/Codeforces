#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int arr[501][501];
void solve()
{
    int n,c,d;
    cin>>n>>c>>d;
    multiset<int>q;
    for(int i=0;i<n*n;i++)
    {
        int val;
        cin>>val;
        q.insert(val);
    }
    int mini=*q.begin();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=-1;
        }
    }
    multiset<int>s;
    arr[0][0]=mini;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+1<=n&&arr[i][j]!=-1&&arr[i+1][j]==-1)
            arr[i+1][j]=arr[i][j]+c;
            if(j+1<=n&&arr[i][j]!=-1&&arr[i][j+1]==-1)
            arr[i][j+1]=arr[i][j]+d;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            s.insert(arr[i][j]);
        }
    }
    if(q==s)cout<<"YES"<<endl;
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