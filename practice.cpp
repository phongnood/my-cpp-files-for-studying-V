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

void solve(long long n) {
	long long power = binpow(8,n);
	cout << power; 
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;cin>>n;
	solve(n);
	return 0;
}
