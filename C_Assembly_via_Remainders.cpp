#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; ++i) {
            cin >> x[i];
        }

        // Initialize the first element of a to a valid value
        int first_element = x[0] + 1;

        // Compute the remaining elements of a
        vector<int> a(n);
        a[0] = first_element;
        for (int i = 1; i < n; ++i) {
            a[i] = x[i - 1] + a[i - 1];
        }

        // Output the array a
        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

