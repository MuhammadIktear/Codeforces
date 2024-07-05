#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin>>s;
    int x=-1;
    int t=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            if(x==-1)
            x=i;
        }
        if(x!=-1&&s[i]=='0')
        {
            t+=i-x+1;
            swap(s[i],s[x]);
            x++;
        }
    }
    cout<<t<<endl;
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