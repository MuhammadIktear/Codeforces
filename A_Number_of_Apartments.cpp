#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int solve()
{
    int n;
    cin>>n;
    if(n==1||n==2||n==4)cout<<-1<<endl;
    else
    {
        if(n%3==0)cout<<n/3<<" "<<0<<" "<<0<<endl;
        if(n%3==1)cout<<(n-7)/3<<" "<<0<<" "<<1<<endl;
        if(n%3==2)cout<<(n-5)/3<<" "<<1<<" "<<0<<endl;
    }
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}
