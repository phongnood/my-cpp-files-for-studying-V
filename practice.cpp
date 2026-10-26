#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

int fact(int n) {
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
    int T;cin>>T;
	long long ans = 1;
	while (T--) {
		int p,e;cin>>p>>e;
		ans = ans * (e+1)%MOD;
	}
	cout << ans;
}