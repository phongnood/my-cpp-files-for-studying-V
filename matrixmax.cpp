#include <bits/stdc++.h>
using namespace std;
long long a[1005][1005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long max_sum = -1e18;
    int point_x = 1;
    int point_y = 1;
    int m, n, m1, m2;
    cin >> m >> n >> m1 >> m2;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= m - m1 + 1; i++) {
        for (int j = 1; j <= n - m2 + 1; j++) {
            long long sum = 0;
            for (int x = i; x < i + m1; x++) {
                for (int y = j; y < j + m2; y++) {
                    sum += a[x][y];
                }
            }
            if (sum > max_sum) {
                max_sum = sum;
                point_x = i;
                point_y = j;
            }
        }
    }
    cout << max_sum << "\n" << point_x << " " << point_y << "\n";
    return 0;
}