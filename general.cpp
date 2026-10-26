#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double x;
    cin >> x;
    long long x1 = floor(x);
    long long x2 = ceil(x);
    long long x3 = round(x);
    cout << x1 << "\n" << x2 << "\n" << x3;
    return 0;
}