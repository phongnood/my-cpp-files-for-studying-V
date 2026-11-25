#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
const int MOD = 1000000007;
long long a[100005];


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n,m;cin>>n>>m;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    long long ans = a[0];
    sort(a+1,a+n);
    for (int i = 1;i<n;i++) {
        if (i>=n-m) ans += a[i];
        else ans -= a[i];
    }
    cout <<ans<<endl;
    return 0;
}
