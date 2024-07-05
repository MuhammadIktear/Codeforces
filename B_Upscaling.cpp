#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    string s1 = "##..##..##..##..##..##..##..##..##..##..";
    string s2 = "..##..##..##..##..##..##..##..##..##..##";
    for (int j = 0; j < n; j++)
    {
        int t = 2;
        while (t--)
        {
            for (int i = 0; i < n * 2; i++)
            {
                if (j % 2 == 0)
                {

                    cout << s1[i];
                }
                else
                {

                    cout << s2[i];
                }
            }
            cout<<endl;
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