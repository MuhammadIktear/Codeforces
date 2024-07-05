#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]='7';
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            arr[i][j]='0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            if (i == j)
                arr[i][j]='*';
 
            if ((i + j) == (n - 1))
                arr[i][j]='*';
        }
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }   
    
}