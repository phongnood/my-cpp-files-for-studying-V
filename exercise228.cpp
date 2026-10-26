#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b;
    cin >> a >> b;
    double tbc = ((a * a) + (b * b)) / 2.0;
    cout << fixed << setprecision(6) << tbc << endl;
    double ttd = (std::abs(a + b)) / 2.0;
    cout << fixed << setprecision(6) << ttd << endl;
    return 0;
}