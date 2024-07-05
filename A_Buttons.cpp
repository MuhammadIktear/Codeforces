#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int sum=0;
    if(a>b)sum+=a,a--;
    else sum+=b,b--;
    if(a>b)sum+=a,a--;
    else sum+=b,b--;
    cout<<sum<<endl;
    return 0;
}
