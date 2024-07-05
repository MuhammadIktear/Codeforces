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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    char x1=s1[0],x2=s1[1],x3=s1[2];
    char y1=s2[0],y2=s2[1],y3=s2[2];
    char z1=s3[0],z2=s3[1],z3=s3[2];
    char c;
    bool b=false;
    if((x1==x2&&x2==x3)&&x1!='.')b=true,c=x1;
    if((y1==y2&&y2==y3)&&y1!='.')b=true,c=y1;
    if((z1==z2&&z2==z3)&&z1!='.')b=true,c=z1;
    if((x1==y1&&y1==z1)&&x1!='.')b=true,c=x1;
    if((x2==y2&&y2==z2)&&x2!='.')b=true,c=x2;
    if((x3==y3&&y3==z3)&&x3!='.')b=true,c=x3;
    if((x1==y2&&y2==z3)&&x1!='.')b=true,c=x1;
    if((x3==y2&&y2==z1)&&x3!='.')b=true,c=x3;
    if(b)cout<<c<<endl;
    else cout<<"DRAW"<<endl;

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