#include <bits/stdc++.h>
using namespace std;

int findLeftIndex(vector<int>& v, int leftVal) {
    int l = 0, r = v.size() - 1, leftIndex = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] >= leftVal) {
            leftIndex = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    return leftIndex;
}

int findRightIndex(vector<int>& v, int rightVal) {
    int l = 0, r = v.size() - 1, rightIndex = -1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] <= rightVal) {
            rightIndex = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return rightIndex;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int q;
    cin >> q;
    while (q--) {
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;
        int leftIndex = findLeftIndex(v, leftVal);
        int rightIndex = findRightIndex(v, rightVal);
        if (leftIndex == -1 || rightIndex == -1) {
            cout << 0 << " ";
        } else {
            cout << rightIndex - leftIndex + 1 << " ";
        }
    }

    return 0;
}
