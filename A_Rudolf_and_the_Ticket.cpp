#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v1(n);
        vector<int>v2(m);
        for(auto &u:v1)cin>>u;
        for(auto &u:v2)cin>>u;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(v1[i]+v2[j]<=k)cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}