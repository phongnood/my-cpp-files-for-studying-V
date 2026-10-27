#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

long long binpow(long long a, long long b) { //luỹ thừa siêu nhanh (tối ưu)
	long long ans = 1;
	a %= MOD;
	while (b>0) {
		if (b%2==1) ans = (ans*a)%MOD;
		b/=2;
		a = a*a%MOD;
	}
	return ans;
}

void solve(int n) {
	long long first = binpow(8,n), second = 10 * first;
	cout << (first % second) % 10; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;cin>>n;
	solve(n);
	return 0;
}
