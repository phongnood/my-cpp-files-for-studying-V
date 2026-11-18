#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
long long a[1000005];

// auto code: binary_search(bắt đầu, kết thúc, kết quả)
bool binary_search(int a[], int l, int r, int x) { // manual code //vất a[] đi cũng được
    while (l <= r) {
        int m = (l+r)/2; 
        if (a[m] == x) return true;
        else if (a[m] < x) r = m-1;
        else if (a[m] > x) l = m+1;
    }
    return false;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}
