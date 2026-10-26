#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin >> n;
    int first = -1;
    int last = -1;
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        if (x > 0) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }
    cout << first << " " << last << "\n";
    return 0;
}