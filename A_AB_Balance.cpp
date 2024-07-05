#include <iostream>
using namespace std;

void solve() {
    string s;
    cin >> s;
    s[0]=s.back();
    cout<<s<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
