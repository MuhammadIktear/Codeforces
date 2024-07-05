#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        deque<int> q;
        int cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            if (cnt == k)
                break;
            q.push_back(i);
            cnt++;
        }

        for (int i = n; i >= k + 1; i--)
        {
            q.push_back(i);
        }

        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop_front();
        }

        cout << endl;  
    }

    return 0;
}
