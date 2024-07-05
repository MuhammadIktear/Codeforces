#include <iostream>
#include <unordered_map>

using namespace std;

// Function to calculate the greatest common divisor (GCD) of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        unordered_map<int, int> freq;

        // Count the frequency of remainders when a divides b for all 1 <= a <= n
        for (int a = 1; a <= n; ++a)
            freq[a % m]++;

        long long ans = 0;

        // Iterate over all possible remainders when a divides b
        for (int b = 1; b <= m; ++b) {
            int g = gcd(m, b);
            int x = b / g;  // Reduce the problem to the case where gcd(a, b) = 1

            // Count the number of elements in the sequence (1, 2, ..., n) that satisfy the condition
            // a + b is a multiple of b * gcd(a, b)
            ans += freq[(m - (x % m)) % m];
        }

        cout << ans << endl;
    }

    return 0;
}
