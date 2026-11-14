#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;
long long a[1000005];
long long tmp[1000005] = { 0 };
long long digit[2000005] = { 0 };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n;cin>>n;
    for (int i = 0;i<n;i++) {
        cin>>a[i];
        tmp[i] = a[i];
    }
    
    sort(tmp,tmp+n);
    for (int i = 0;i<n;i++) {
        int index=tmp[i]+1000000;
        if (digit[tmp[i]] == 0) {
            cout << tmp[i] << ' ';
            digit[tmp[i]] = 1;
        }
    }
    cout<<endl;
    for (int i = 0;i<n;i++) {
        digit[a[i]+1000000] = 0;
    }
    for (int i = n-1;i>=0;i--) {
        int index = a[i]+1000000;
        if (digit[index] == 0) {
            cout << a[i] << ' ';
            digit[index] = 1;
        }
    }
    return 0;
}