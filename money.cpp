#include <bits/stdc++.h>
using namespace std;
long long a[1000005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long q;
    cin >> q;
    long long tien_thieu, so_xu_phai_tra;
    while(q--) {
        long long a, b, n, S;
        cin >> a >> b >> n >> S;
        so_xu_phai_tra = S/n;
        if (so_xu_phai_tra <= a) {
            tien_thieu = S - (so_xu_phai_tra * n);
            if ((tien_thieu - b) <= 0) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        } else if (so_xu_phai_tra > a) {
            tien_thieu = S - (a * n);
            if (tien_thieu > 0) {
                if ((tien_thieu - b) <= 0) {
                    cout << "YES" << "\n";
                } else {
                    cout << "NO" << "\n";
                }
            }
        }
        
    }
    return 0;
}