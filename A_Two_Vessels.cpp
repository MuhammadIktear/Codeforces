#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vec vector<int>
#define py cout << "YES\n"
#define pn cout << "NO\n"
#define pb(x) push_back(x)
#define sort(x) sort(x.begin(), x.end())
#define sortr(x) sort(x.rbegin(), x.rend())
#define loop(s,i,n) for(int i=s;i<n;i++)
#define loopr(s,i,n) for(int i=n-1;i>=s;i--)
#define loopa(u,x) for(auto u:x)
#define endl '\n'

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    if(a>b){
        while(a>b){
            a-=c;
            b+=c;
            cnt++;
        }
    }
    else if(a<b){
        while(a<b){
            a+=c;
            b-=c;
            cnt++;
        }
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