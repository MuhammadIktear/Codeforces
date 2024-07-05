#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_ml = k * l;
    int total_slices = c * d;
    int drink_portions = total_ml / nl;
    int salt_portions = p / np;

    int mini = min(min(drink_portions, total_slices), salt_portions);
    cout << mini / n << endl;

    return 0;
}
