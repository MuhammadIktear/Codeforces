#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n-1];
    int arr3[n-2];
    map<int,int> mp1, mp2, mp3;
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
        mp1[arr1[i]]++;
    }
    for(int i = 0; i < n-1; i++) {
        cin >> arr2[i];
        mp2[arr2[i]]++;
    }
    for(int i = 0; i < n-2; i++) {
        cin >> arr3[i];
        mp3[arr3[i]]++;
    }
    int f1 = -1;
    for(int i = 0; i < n; i++) {
        if(mp1[arr1[i]] != mp2[arr1[i]]) {
            f1 = arr1[i];
            break;
        }
    }
    if(f1==-1)f1=mp1[n-1];
    int f2 = -1;
    for(int i = 0; i < n-1; i++) {
        if(mp2[arr2[i]] != mp3[arr2[i]]) {
            f2 = arr2[i];
            break;
        }
    }
    if(f2==-1)f2=mp1[n-1];
    cout << f1 << endl << f2 << endl;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
