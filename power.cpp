#include <iostream>
#include <cmath>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y;
    cin >> x >> y;
    long long z = std::pow(x, y);
    cout << z << "\n";
    return 0;
}