#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int cnt=1;
        for(int i=3;i<=n;i+=x)
        {
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}