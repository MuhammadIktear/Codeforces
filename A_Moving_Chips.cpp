#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int x,y;
        for(auto &u:v)cin>>u;
        for(int i=0;i<n;i++)
        {
            if(v[i]==1)
            {
                x=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                y=i;
                break;
            }
        }
        int op=0;
        for(int i=x;i<y;i++)
        {
            if(v[i]==0)op++;
        }
        cout<<op<<endl;
    }
    return 0;
}