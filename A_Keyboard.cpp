#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    char c;
    cin>>c;
    string s;
    cin>>s;
    string ss="qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<ss.size();j++)
        {
            if(s[i]==ss[j])
            {
                if(c=='R')cout<<ss[j-1];
                else cout<<ss[j+1];
            }
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