#include<bits/stdc++.h>
using namespace std;
 
#define int long long
#define endl '\n'
 
void solve() {
    string a, b;
    cin >> a >> b;
    string s1=b;
    for (int i = 0; i < stoi(a) - 1; ++i) {
        s1 += "0";
    }
    if (b == "10")s1.pop_back();
    if(a=="1"&&b=="10")cout<<-1<<endl;
    else if(s1.size()==stoi(a))
    cout<<s1<<endl;
    else cout<<-1<<endl;
    
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}