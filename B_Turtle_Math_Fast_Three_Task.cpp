#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        ll sum=0;
        bool flag=false;
        for(int i=0;i<n;i++){
     cin>>a[i];
     sum+=a[i];
        }
 
    if(sum%3==0) cout<<"0"<<endl;
    else if(sum%3==2) cout<<"1"<<endl;
    else {
        for(int i=0;i<n;i++){
           ll t=sum-a[i];
            if(t%3==0){
               flag=true;
               break;
            }
        }
if(flag)cout<<"1"<<endl;
else cout<<"2"<<endl;
    }
    }
 
}