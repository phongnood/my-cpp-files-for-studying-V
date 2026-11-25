#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
long long a[1000005];
long long fibo[94] = { 0 };
long long psum[1000005] = { 0 };
void generate() {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i<94;i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

bool check_fibo(long long value) {
    for (int i = 0;i<94;i++) {
        if (fibo[i] == value) {
            return true;
        }
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;cin>>n;
    int t;cin>>t;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    generate();

    if (check_fibo(a[0])) {
        psum[0] = 1;
    } else {
        psum[0] = 0;
    }

    for (int i = 1;i<n;i++) {
        if (check_fibo(a[i])) {
            psum[i] = psum[i-1]+1;
        } else {
            psum[i] = psum[i-1];
        }
    }
    while (t--) {
        int l,r;cin>>l>>r;
        int count = 0;
        if (l == 0) {
            count = psum[r];
        } else {
            count = psum[r] - psum[l-1];
        }
        cout << count << endl;
    }
    return 0;
}