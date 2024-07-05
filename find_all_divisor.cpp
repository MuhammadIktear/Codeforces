#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<pair<int, int>> findDivisorsWithinLimit(int n, int limit) {
    vector<pair<int, int>> divisors;
    int sqrtN = sqrt(n);
    for (int i = 2; i <= sqrtN; ++i) {
        if (n % i == 0) {
            if (i <= limit) {
                if(n/i<=100000)
                divisors.push_back({i, n / i});
            }
            if (n / i <= limit && n / i != i) {
                if(i<=100000)
                divisors.push_back({n / i, i});
            }
        }
    }
    return divisors;
}

int main() {
    int number, limit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the limit: ";
    cin >> limit;

    vector<pair<int, int>> divisors = findDivisorsWithinLimit(number, limit);

    cout << "The divisors of " << number << " within the limit " << limit << " are:\n";
    for (auto divisor : divisors) {
        cout << divisor.first << " * " << divisor.second << endl;
    }
    return 0;
}
