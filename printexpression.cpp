#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long X, Y, Z, T;
    cin >> X >> Y >> Z >> T;
    cout << Y << "," << Z << "," << X << "," << T << "\n";
    cout << X + Y + Z + T << "\n";
    cout << X - Y + Z * T << "\n";
    return 0;
}