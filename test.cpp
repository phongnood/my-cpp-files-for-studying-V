#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
int a[1005];

bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2;i<=sqrt(n);i++) {
        if (n%i==0) {
            return false;
        }
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;cin>>n;
    
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    for (int i = 0;i<n;i++) {
        int cur_val = a[i];
        if (prime (cur_val)) {
            cout << 0 << " ";
        } else {
            cout << a[i] << " ";
        }
    }
	return 0;
}