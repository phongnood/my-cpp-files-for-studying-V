#include <bits/stdc++.h>

#define endl '\n'

using namespace std;
const int MOD = 1000000007;
long long a[1000005];
long long b[1000005];


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
    int i = 0, j =0;
    int count = 0;
    sort(a,a+n);
    sort(b,b+m);
    while (i < n && j < m) {
        if (abs(a[i] - b[j]) <= 1) {
            count++;
            i++;j++;
        }
        else {
            int tmp = min(a[i],b[j]);
            if (tmp == b[j]) j++;
            else i++;
        }
    }
    cout << count << endl;
    return 0;
}

  