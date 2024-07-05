#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    if(n==1)cout<<9<<endl;
    if(n==2)cout<<98<<endl;
    if(n==3)cout<<989<<endl;
    else if(n>3)
    {
        cout<<989;
        n=n-3;
        while(n>0)
        {
            for(int i=0;i<=9;i++)
            {
                if(n>0){
                cout<<i;
                n--;
                }
            }
        }
        cout<<endl;
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