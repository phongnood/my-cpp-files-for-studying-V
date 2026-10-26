#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    cout << b / a << "\n";
    double c = (double)b / a;
    cout << fixed << setprecision(2) << c << "\n";
    return 0;
}