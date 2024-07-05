#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                s.insert(s.begin() + i+1, t.begin(), t.end());
                i += t.size();
            }
        }

        int flag = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == s[i + 1])
                flag = 0;
        }
        if (flag == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }

    return 0;
}
