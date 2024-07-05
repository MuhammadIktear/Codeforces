#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int r,c;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int val;
            cin>>val;
            arr[i][j]=val;
            if(val==1)r=i,c=j;
        }
    }
    cout<<abs(r-2)+abs(c-2);
}