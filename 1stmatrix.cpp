#include <bits/stdc++.h>
using namespace std;
long long a[1005][1005];
long long max_col[1005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 1; j <= n; j++) {
        long long cur_max = -1e18;
        for (int i = 1; i <= m; i++) {
            if (a[i][j] > cur_max) {
                cur_max = a[i][j];
            }
        }
        max_col[j] = cur_max;
    }
    long long min_val = 1e18;
    for (int j = 1; j <= n; j++) {
        if (max_col[j] < min_val) {
            min_val = max_col[j];
        }
    }
    for (int j = 1; j <= n; j++) {
        if (max_col[j] == min_val) {
            cout << j << " ";
        }
    }
    return 0;
}