#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,m;
    cin>>n>>m;
    string s1,s2;
    cin>>s1>>s2;
    int j=0;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(j==m)break;
        if(s1[i]==s2[j])
        {
            cnt++;
        }
        else
        {
            i--;
        }
        j++;
    }
    cout<<cnt<<endl;
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