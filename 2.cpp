#include <bits/stdc++.h>

using namespace std;
const int MOD = 1000000007;

bool csnt(int n){
	while (n) {
		int sum = n%10;
		if (sum != 2 && sum != 3 && sum != 5 && sum != 7) {
			return false;
		}
	}
	return true;
}

bool nt(int n){
	if (n<2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int a, b; cin >> a >> b;
	long long dem = 0;
    for(int i = a; i <= b; i++){
        if(csnt(i) && nt(i)){
            dem++;
        }
    }
	cout << dem;
}