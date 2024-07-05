#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a*2<=b)
        {
            cout<<a<<" "<<a*2;
        }
        else cout<<-1<<" "<<-1;
        cout<<endl;
    }
    return 0;
}