#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int arr[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(arr[i] == 0) {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
