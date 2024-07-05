#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int arr[n];
    bool b=true;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0&&arr[i]!=arr[i-1])b=false;
        s+='R';
    }
    if(b==true)cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        s[1]='B';
        cout<<s<<endl;
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