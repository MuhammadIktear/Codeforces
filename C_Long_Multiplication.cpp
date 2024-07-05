#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    bool flag=0;
    for(int i=0;i<s1.size();i++)
    {
        int a=s1[i]-'0';
        int b=s2[i]-'0';
        if(a==b)continue;
        else if(flag==0)
        {            
            if(a>b)swap(s1[i],s2[i]);
            flag=1;
        }
        else
        {
            if(a<b)swap(s1[i],s2[i]);
        }
    }
    cout<<s1<<endl<<s2;
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