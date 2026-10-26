#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        if (a % 2 == 0) {
            cout << "even" << "\n";
        } else {
            cout << "odd" << "\n";
        }
    }
    return 0;
}