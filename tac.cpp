#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m, k;
    cin >> n >> m >> k;
    long long rem = 0;
    long long diff = abs(n - m);
    if (k <= diff) {
        cout << diff - k << "\n";
    } else {
        rem = k - diff;
        cout << rem % 2 << "\n";
    }
    return 0;
}