#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long a,b,c;cin>>a>>b>>c;
    cout << (a%10)+(b%100)+(c%1000) << endl;
    return 0;
}