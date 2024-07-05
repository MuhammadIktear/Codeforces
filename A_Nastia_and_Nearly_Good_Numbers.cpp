#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a,b;
    cin>>a>>b;
    int x=a*b;
    int c=x;
    int s=a*(b-1);

    if((a+s)<x)
    {
        b=s;
    }
    else
    {
        x=a*(b+1);
        b=c;
    }
    if(b%a==0&&x%a==0&&a!=b)
    {
        cout<<"YES"<<endl;
        cout<<a<<" "<<b<<" "<<x<<endl;
    }
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