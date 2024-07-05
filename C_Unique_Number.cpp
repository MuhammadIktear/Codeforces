#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int n;
    cin>>n;
    string s="";
    if(n<=9)cout<<n<<endl;
    else if(n>45)cout<<-1<<endl;
    else
    {
        for(int i=9;n>i;i--)
        {
            n-=i;
            s+=to_string(i);
        }
        s+=to_string(n);
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
