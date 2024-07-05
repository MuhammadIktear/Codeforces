#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n,pos;
    cin>>n>>pos;
    pos--;
    int maxi=INT_MIN;
    int arr[n];
    int idx=-1;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        idx=i;
        }
    }
    int x=arr[pos];
    int cnt=0;
    if(idx<pos)
    {
        swap(arr[idx],arr[pos]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==x)
        {
            if(arr[i]>arr[i+1])
            {
                cnt++;
                swap(arr[i+1],arr[i]);
            }
            else 
            {
                break;
            }
        }
        else if(arr[i+1]==x)
        {
            if(arr[i+1]>arr[i])
            {
                cnt++;
            } 
            else 
            {
                break;
            }           
        }
        else
        {
           if(arr[i]>arr[i+1])
           {
              swap(arr[i+1],arr[i]);
           }
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