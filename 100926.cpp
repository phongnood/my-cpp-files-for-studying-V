#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, S;
    cin >> n >> S;
    long long xu = 0;
    if (S % n == 0) {
        xu = S / n;
    } else {
        xu = (S / n + 1);
    }
    cout << xu << "\n";
    return 0;
}