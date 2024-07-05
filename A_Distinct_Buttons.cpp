#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 5;
bool vst[N][N];
int n;
vector<vector<pair<int, int>>> p = {
    {{0, 1}, {1, 0}, {0, -1}},
    {{1, 0}, {0, -1}, {-1, 0}},
    {{-1, 0}, {0, 1}, {1, 0}}
};

void dfs(int si, int sj) {
    vst[si][sj] = true;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int ci = si + p[i][j].first;
            int cj = sj + p[i][j].second;
            if (!vst[ci][cj] && ci >= -100 && ci <= 100 && cj >= -100 && cj <= 100) {
                vst[ci][cj] = true;
                dfs(ci, cj);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                vst[i][j]=false;
            }
        }
        
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cout<<vst[i][j]<<" ";
            }
            cout<<endl;
        }
        for (int i = 0; i < n; i++) {
            int di, dj;
            cin >> di >> dj;
            dfs(di, dj);
        }
        
        bool canVisitAll = true;
        for (int i = -100; i <= 100; i++) {
            for (int j = -100; j <= 100; j++) {
                if (!vst[i][j]) {
                    canVisitAll = false;
                    break;
                }
            }
            if (!canVisitAll) break;
        }
        if (canVisitAll)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
                    for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cout<<vst[i][j]<<" ";
            }
            cout<<endl;
        }

            
    }

    return 0;
}
