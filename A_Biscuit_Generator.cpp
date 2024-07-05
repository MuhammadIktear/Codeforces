#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,T;
    cin>>t>>a>>T;
    int total=0;
    int tt=t;
    while(tt<=T)
    {
        total+=a;
        tt+=t;  
    }
    cout<<total<<endl;
    return 0;
}