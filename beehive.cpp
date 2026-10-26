#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    long long m = 1;
    long long i = 1;
    cin >> n;
    n = n - 1;
    while (n--) {
        m = m + (6 * i);
        i++;
    }
        cout << m << "\n";
    return 0;
}