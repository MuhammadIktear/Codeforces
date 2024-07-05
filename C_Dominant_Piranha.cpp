#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if(maxi<val)maxi=val;
        arr[i] = val;
    }
    int ind=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==maxi&&(i > 0 && arr[i - 1] < maxi))
        {
            ind=i;
            break;
        }
        else if (arr[i]==maxi&&(i < n - 1 && arr[i + 1] < maxi))
        {
            ind=i;
            break;
        }        
    }
    if(ind==-1)cout<<-1<<endl;
    else
    cout<<ind+1<<endl;
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
