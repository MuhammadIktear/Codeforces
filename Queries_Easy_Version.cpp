#include<bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> v;

    while (q--) {
        int a;
        cin >> a;

        if (a == 1) {
            int val;
            cin >> val;
            v.push_back(val);
        } else if (a == 3) {
            int oddmin = INT_MAX;
            int idx = -1;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] % 2 == 1) {
                    if (v[i] < oddmin) {
                        oddmin = v[i];
                        idx = i;
                    }
                }
            }
            if (idx != -1) {
                v.erase(v.begin() + idx);
                cout << oddmin << endl;
            } else {
                cout << "empty" << endl;
            }
        } else if (a == 2) {
            int evenmin = INT_MAX;
            int idx = -1;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] % 2 == 0) {
                    if (v[i] < evenmin) {
                        evenmin = v[i];
                        idx = i;
                    }
                }
            }
            if (idx != -1) {
                v.erase(v.begin() + idx);
                cout << evenmin << endl;
            } else {
                cout << "empty" << endl;
            }
        }
    }

    return 0;
}
