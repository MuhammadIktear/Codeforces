#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool reach_value(ll s, ll n, map<ll, bool>& memo)
{
    if (s == n) return true;
    if (s > n) return false;
    
    if (memo.find(n) != memo.end()&&memo[n]!=false) {
        return memo[n];
    }

    bool op1 = reach_value(s * 2, n, memo);
    bool op2 = reach_value(s + 3, n, memo);
    memo[n] = op1 or op2;
    
    return memo[n];
}

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, bool> memo;
        
        if (n == 1 || reach_value(1, n, memo))
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}
