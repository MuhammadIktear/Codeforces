#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve() {
    int l,w,h,d;
    cin>>l>>w>>h>>d;
        int maxi = 0;
    for (int i=1; i<=l;i++) { 
        for (int j=1;j<=w;j++) {
            int x=i*j;
            if (d%x==0&&(d/x)<= h){
                maxi=max(maxi,(l-i+1)*(w-j+1)*(h-(d/(i*j))+1));
            }
        }
    }
    cout<< maxi<<endl; 
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}