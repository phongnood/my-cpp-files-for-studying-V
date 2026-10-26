#include <iostream>
#include <numeric>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a, b;
    cin >> a >> b;
    long long gcd = std::lcm(a, b);
    cout << gcd << "\n";
    return 0;
}