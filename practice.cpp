#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

bool isPrime(long long n) {
    for (long long i = 2;i * i <= n;i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return n >= 2;
}

long long legendre(long long n, long long p) {
    long long result = 0;
    for (long long i = p;i <= n;i *= p) {
        result = result%MOD + (n / i)%MOD;
        result %= MOD;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n;cin >> n;

    long long result = 1;
    for (long long i = 1;i <= n;i++) {
        if (isPrime(i)) {
            long long exp = legendre(n, i);
            result = result%MOD * (exp + 1)%MOD;
            result %= MOD;
        }
    }

    cout << result;
    return 0;
}