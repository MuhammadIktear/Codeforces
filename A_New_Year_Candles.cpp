#include <iostream>
using namespace std;

#define int long long
#define endl '\n'

void solve()
{
    int n, k;
    cin >> n >> k;
    
    int cnt = n; 
    while (n >= k)
    {
        cnt += (n / k);
        int m=n%k;
        n /= k;
        n+=m;
    }
    cout << cnt << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
