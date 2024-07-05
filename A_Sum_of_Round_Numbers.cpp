#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<string>v;
        int n=s.size()-1;
        string temp;
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]!='0')
            {
                temp+=s[i];
                for(int j=i;j<n;j++)
                {
                    temp+='0';
                }
                v.push_back(temp); 
                temp="";   
            }
        }
        cout<<v.size()<<endl;
        for(auto u:v)cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}