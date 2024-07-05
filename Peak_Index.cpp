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
        vector<int>pre(n);
        for(auto &a:v)cin>>a;
        pre[0]=v[0];
        for(int i=1;i<v.size();i++)
        {
        pre[i] = pre[i - 1] + v[i];
        }
        int cnt=0;
        for(int i=1;i<n-1;i++)
        {
            if(pre[i]-v[i]==pre[n-1]-pre[i])
            cnt++;
        } 
        cout<<cnt<<endl;    

    }
    return 0;
}