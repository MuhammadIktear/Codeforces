#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &u:v)
        cin >> u;
    
    int sum1 = 0;
    sum1+=v[0];
    int sum2=0;
    for(int i=1;i<n;i++)
    {
        sum1+=v[i];
        sum2+=i;
        if(sum1>=sum2)continue;
        else 
        {
            cout<<"NO"<<endl;
            return;
        }

    }
    cout<<"YES"<<endl;
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
