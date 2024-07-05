#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
const int limit = 1e7 + 123;

vector<int> primes;
bitset<limit> isPrime;


void primeGen(int n) {
    for (int i = 3; i <= n; i += 2)
        isPrime[i] = 1;
    for (int i = 3; i * i <= n; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }
    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (isPrime[i])
            primes.push_back(i);
    }
}



int NOD(int n) {
    primeGen(limit);
    int nod=1;
    for(auto i:primes)
    {
        if(1LL*i*i>n)break;
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0){
                n/=i;
            cnt++;
            }
           cnt++;
           nod*=cnt;
        }

    }
    if(n>1)nod*=2;
    return nod;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<NOD(n);
    return 0;
}
