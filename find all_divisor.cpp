#include <iostream>
#include <set>

using namespace std;

set<long long> findDivisors(long long n) {
    set<long long> divisors;
    
    for (long long i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            divisors.insert(i);
            if (n / i != i) // To handle cases like n = 16, where both 2 and 4 are divisors
                divisors.insert(n / i);
        }
    }
    
    return divisors;
}

int main() {
    long long n;
    cout << "Enter a number (1 < n <= 10^18): ";
    cin >> n;

    if (n <= 0 || n > 1000000000000000000LL) {
        cout << "Invalid input. Please enter a number within the specified range." << endl;
        return 1;
    }

    set<long long> divisors = findDivisors(n);

    cout << "Divisors of " << n << " are: ";
    for (long long divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}
