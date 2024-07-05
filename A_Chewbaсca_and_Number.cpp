#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int len = s.size();

    for(int i=0;i<len;i++){
        int a = s[i] - '0';
        if(i==0&&s[0]=='9')continue;
        else if(a>4){
            s[i] = ((9-a)+'0');
        }
    }

    cout<<s;

    return 0;
}