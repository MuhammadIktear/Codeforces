#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=n-1;
    int cnt1=-1;
    for(int i=0;i<n;i++)
    {
        cnt1++;
        if(s[i]=='A')
            break;
    }
    int cnt2=-1;
    for(int i=n-1;i>=0;i--)
    {
        cnt2++;
        if(s[i]=='B')
            break;
    }
    if(cnt1+cnt2==n)cout<<0<<endl;
    else
    cout<<ans-cnt1-cnt2<<endl;
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