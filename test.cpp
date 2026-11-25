#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
const int MOD = 1000000007;
long long a[1000005];
long long b[1000005];

int pos(long long a[], int l, int r, int x) {
    int res = -1;
    while (l <= r) {
        int m = (l+r)/2;
        if (a[m]>x) {
            res = m;
            r = m-1;
        }
        else {
            l = m + 1;
        }
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;cin>>n>>m;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    for (int i = 0;i<m;i++) {
        cin>>b[i];
    }
    sort(b,b+m);
    for (int i = 0;i<n;i++) {
        int id = pos(b, 0, m-1, a[i]);
        cout << m-id<< ' ';
    }
    return 0;
}
