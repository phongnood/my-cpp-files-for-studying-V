#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    while (cin >> n) {
        if (std::abs(n) % 2 == 0) {
            cout << "0" << "\n";
        } else {
            cout << "1" << "\n";
        }
    }
    return 0;
}