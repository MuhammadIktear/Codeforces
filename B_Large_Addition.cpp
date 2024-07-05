#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin>>s;
    if(s[0]=='1'&&s[s.size()-1]<'9')
    {
        bool b=false;
        for(int i=1;i<s.size()-1;i++)
        {
            if(s[i]=='0')b=true;
        }
        if(b)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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