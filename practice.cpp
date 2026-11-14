#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
long long a[1000005];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;cin>>n;
    long long max_odd = 0, current_odd = 0;
    long long beg_index = 0, end_index = 0;
    long long max_sum = 0, current_sum = 0;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
    }
    for (int i = 0;i<n;i++) {
        if (a[i]%2==0) {
            current_odd++;
            current_sum+=a[i];
            if (current_odd > max_odd || (current_odd == max_odd && current_sum > max_sum)) {
                max_odd = current_odd;
                max_sum = current_sum;
                end_index = i;
            }
        } else {
            current_odd = 0;
            current_sum = 0;
        }
    }
    cout << max_odd<<endl;
    for (int i = end_index - max_odd + 1;i<=end_index;i++) {
        cout << a[i] << ' ';
    }
    return 0;
}