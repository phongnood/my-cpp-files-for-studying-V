#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    long long ans = 0;
    cin >> n;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}