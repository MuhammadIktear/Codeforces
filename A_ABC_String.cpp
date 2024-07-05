#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{

    string s;
    cin >> s;
    if(s[0]==s[s.size()-1])cout<<"NO"<<endl;
    else
    {
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
        }
        else{
            if(st.top()!=s[i])
            st.pop();
            else
            st.push(s[i]);
        }
    }
    if(st.empty())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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