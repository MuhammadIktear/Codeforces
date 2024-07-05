#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=4-s.size();
    string t="";
    while(a--)t+='0';
    s=t+s;
    cout<<s;
    return 0;
}