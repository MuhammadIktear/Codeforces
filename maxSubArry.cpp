#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int sum=0;
    int start=-1;
    int n;
    cin>>n;
    int arr[n];
    int ansStart=-1;
    int ansEnd=-1;
    int maxi=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(sum==0)start=i;
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            ansStart=start,ansEnd=i;
        }
        if(sum<0)sum=0;
    }
    cout<<maxi<<endl;
    cout<<ansStart+1<<" "<<ansEnd+1<<endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}