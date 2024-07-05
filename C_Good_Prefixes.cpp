#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) 
        cin >> arr[i];    
    set<int>s;
    int ans = 0;
    int cur = 0;
    for(int i = 0; i < n; i++){
        cur += arr[i];
        s.insert(arr[i]);
        if(cur % 2 == 0){
            int r = cur >> 1;
            if(s.count(r)) 
                ans++;
        }
    }
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    
    return 0;
}
