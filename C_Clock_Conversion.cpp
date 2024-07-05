#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    string s;
    cin >> s;
    string s1 = "";
    string s2 = "";
    s1 += s[0];
    s1 += s[1];
    s2 += s[3];
    s2 += s[4];
    int n = stoi(s1);
    if (s1 == "00")
        cout << 12 << ":" << s2 << " AM" << endl;
    else if (s1 == "12")
        cout << 12 << ":" << s2 << " PM" << endl;
    else
    {
        string x = "";
        int a = 12 - n;
        int y=abs(a);
        if (a < 0&&y<10)
            cout <<"0"<<abs(a) << ":" << s2 << " PM" << endl;
        else if(a < 0&&y>=10)
        {
            cout << abs(a) << ":" << s2 << " PM" << endl;
        }
        else
        {
            cout << s1 << ":" << s2 << " AM" << endl;
        }
    }
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