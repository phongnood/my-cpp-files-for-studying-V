#include <bits/stdc++.h>
using namespace std;
long long a[1005][1005];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    long long sum1 = 0;
    long long sum2 = 0;
    long long sum3 = 0;
    long long sum4 = 0;
    long long sum5 = 0;
    long long sum6 = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
            sum1 += a[i][i];
    }
    for (int i = 1; i <= n; i++) {
            sum2 += a[i][n - i + 1];
    }
    for (int i = 1; i <= n; i++) {
            sum3 += a[i][i+1];
    }
    for (int i = 2; i <= n; i++) {
            sum3 += a[i][i-1];
    }
    for (int i = 1; i <= n; i++) {
            sum4 += a[i][n - i];
    }
    for (int i = 2; i <= n; i++) {
            sum4 += a[i][n - i + 2];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            sum5 += a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            sum6 += a[n - i + 1][j];
        }
    }
    cout << sum1 << "\n" << sum2 << "\n" << sum3 << "\n" << sum4 << "\n" << sum5 << "\n" << sum6 << "\n";
    return 0;
}