#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

int factcount(int n) { // đếm ước nguyên tố
	int count = 0;
	for (int i = 2;i<=sqrt(n);i++) {
		if (n%i==0) {
			count++;
			while (n%i==0) {
				n/=i;
			}
		}
	}
	if (n!=1) {
		count++;
	}
	return count;
}


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    long long n;cin>>n;
	long long gt = 1;
	for (int i = 1;i<=n;i++) {
		gt*=i;
	}
	cout << gt;
    cout << factcount(gt);
}