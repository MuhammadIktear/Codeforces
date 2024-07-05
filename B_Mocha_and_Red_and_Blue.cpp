#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
        int n;
        string s;
        cin>>n>>s;
        for(int i=0; i<n-1; i++)
        {
            if(s[i] != '?' && s[i+1] == '?')
            {
                if(s[i]=='B') s[i+1] = 'R';
                if(s[i]=='R') s[i+1] = 'B';
            }
        }
        for(int i=n-2; i>=0; i--)
        {
            if(s[i]=='?' && s[i+1]!='?')
            {
                if(s[i+1]=='B') s[i] = 'R';
                if(s[i+1]=='R') s[i] = 'B';
            }
        }
        if(s[0]=='?')
        {
            for(int i=0; i<n; i++)
            {
                if(i%2==0) s[i] = 'B';
                if(i%2==1) s[i] = 'R';
            }
        }
        cout<<s<<endl;

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