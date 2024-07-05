#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin>>n;
    int i=1;
    while(true)
    {
        if(n%i==0)
        {
            i++;
        }
        else break;
    }
    cout<<i-1<<endl;
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