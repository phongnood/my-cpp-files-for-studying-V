#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int a[1005];

bool prime(int n) {
    for(int i = 2;i<=sqrt(n);i++) {
        if (n%i==0) {
            return false;
        }
    }
    return n>1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;cin>>n;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    for (int i = 0;i<n;i++) {
        long long suml = 0, sumr = 0;
        for (int j = 0;j<i;j++) {
            suml+=a[j];
        }
        for (int k = i+1;k<n;k++) {
            sumr+=a[k];
        }
        if (prime(suml) && prime(sumr)) {
            cout << i << endl;
        }
    }
    return 0;
}