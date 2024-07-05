#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max_cnt = 0;
    int indexi = -1;
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '#')
            {
                cnt++;
            }
        }
        if (max_cnt < cnt)
        {
            indexi = i;
            max_cnt = cnt;
        }
    }
    vector<int> v;
    for (int j = 0; j < m; j++)
    {
        if (arr[indexi][j] == '#')
            v.push_back(j);
    }
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
    }
    int indexj=sum/v.size();
    cout<<indexi+1<<" "<<indexj+1<<endl;
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
