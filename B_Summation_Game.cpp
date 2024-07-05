#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        vector<int> v(n + 1);
        for(int i = 1; i <= n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());

        vector<int> prefix(n + 1);
        prefix[1] = v[1];
        for(int i = 2; i <= n; i++)
        {
            prefix[i] = prefix[i-1] + v[i];
        }

        int maxSum = INT_MIN;
        for(int i = n; i >= 0; i--)
        {
            int idx = n - i;
            if(idx > a) break;
            int p = min(i, b);
            int sum = prefix[i - p] - (prefix[i] - prefix[i - p]);
            maxSum = max(maxSum, sum);
        }

        cout << maxSum << endl;
    }

    return 0;
}
