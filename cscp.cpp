#include <bits/stdc++.h>

using namespace std;

int a[100005];
bool isSquared(long long x) {
        long long root = sqrt(x);
        return (root * root) == x;
    }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int count = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            long long sum = a[i] + a[j];
            if (isSquared(sum)) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}