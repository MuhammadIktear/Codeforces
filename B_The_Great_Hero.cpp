#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int a,h,n;
    cin>>a>>h>>n;
    int arr1[n],arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int sum=0;
    int d;
    for(int i=0;i<n;i++)
    {
        int d=ceil(double(arr2[i])/a);
        h-=arr1[i]*d;
    }
	for(int i=0;i<n;i++)
	{
		if(h+arr1[i]>0)
		{
			cout<<"YES"<<endl;
			return ;
		}
	}
	cout<<"NO"<<endl;    
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