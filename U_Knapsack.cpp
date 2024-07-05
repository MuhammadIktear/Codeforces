#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int dp[N][N];
int knapsack(int n, int weight[], int value[], int W) {
    if (n < 0 || W == 0) {
        return 0;
    }
    if(dp[n][W]!=-1)return dp[n][W];
    if (weight[n] <= W) {
        int op1 = knapsack(n - 1, weight, value, W - weight[n]) + value[n];
        int op2 = knapsack(n - 1, weight, value, W);
        dp[n][W]=max(op1, op2);
        return dp[n][W];
    } else {
        return knapsack(n - 1, weight, value, W);
    }
}

int main() {
    int n, W;
    cin >> n >> W;
    int weight[n];
    int value[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        weight[i] = a;
        value[i] = b;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            dp[i][j]=-1;
        }
    }
    cout << knapsack(n - 1, weight, value, W);

    return 0;
}
