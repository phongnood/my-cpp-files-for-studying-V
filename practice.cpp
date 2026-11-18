#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int a[1000005];

bool bs(int a[], int l, int r, int x) {
    while (l <= r) {
        int m = (l + r)/2;
        if (a[m] == x) return true;
        else if (a[m]<x) l = m+1;
        else r = m-1;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    sort(a, a + n);
    int q;cin>>q;
    while (q--) {
        int x;cin>>x;
        if (binary_search(a, a + n, x)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
