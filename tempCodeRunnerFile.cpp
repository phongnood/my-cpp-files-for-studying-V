#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int a[1005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;cin>>n;
    bool flag = false;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    for (int i =0;i<n;i++) {
        if (i%2==0 && a[i]%2==0) {
            flag = true;
            cout << a[i] << ' ';
        }
    }
    if (flag) {
        return 0;
    } else {
        cout << "NONE"<<endl;
    }
    return 0;
}