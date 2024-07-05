#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    int id1=-1;
    int id2=-1;
    int el1=-1;
    int el2=-1;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(val!=i+1)
        {
            cnt++;
            if(id1==-1){
            id1=i;
            el1=val;
            }
            id2=i;
            el2=val;
        }
    }

    if(cnt==0)cout<<0;
    else if(el1==n&&el2==1)cout<<3;
    else if(id1==0&&id2==n-1)cout<<2;
    else if(cnt==n)cout<<2;
    else
    {
        if(id1!=0&&id2!=-1)cout<<1;
        else if(id1==0&&id2!=n)cout<<1;
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
